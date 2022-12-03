#include <stdio.h>

int main(){
    int n,m,a,i;
    printf("Nhap 2 so m va n: ");
    scanf("%d %d",&n,&m);
    a=0;

    printf("so chinh phuong trong doan [%d;%d]: ",n,m);
    for(;n<=m;n++){
        for(i=1;i<=n;i++){
            if(n/i==i && n%i==0){
                printf("%d ",n);
                a+=1;
                break;
            }else{
                continue;
            }
        }
    }
    printf("\nco tat ca %d so chinh phuong",a);
    return 0;
}