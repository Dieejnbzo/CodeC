#include <stdio.h>

int main(){
    int h,i,j,tab,Tab;
    printf("Nhap chieu cao h: ");
    scanf("%d",&h);
    Tab=h-1;
    tab=Tab;

    if(h>0){
        for(i=1;i<=h;i++){
            if(tab>0){
                    do{
                    printf("  ");
                    tab-=1;
                }while(tab>0);
            }
            Tab-=1;
            tab=Tab;
            for(j=1;j<=i;j++){
                printf("%d ",j);
            }
            for(j=i-1;j>0;j-=1){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    else{
        printf("Nhap chieu cao h: ");
        scanf("%d",&h);
    }
    return 0;
}
