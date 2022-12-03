#include <stdio.h>

int main(){
    int h,i,a;
    printf("Nhap chieu cao h: ");
    scanf("%d",&h);

    for(i=1;i<=h;i++){
        a=i;
        while(a>0){
            printf("* ");
            a-=1;
        }
        printf("\n");
    }  
    return 0;
}