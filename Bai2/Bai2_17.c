#include <stdio.h>

int main(){
    int m,n,i,a;
    printf("Nhap hai so m,n: ");
    scanf("%d %d",&m,&n);
    a=0;

    for(i=2;i<=n;i++){
        if(m%i==0 && n%i==0){
            a=1;
            printf("%d va %d khong la 2 so nguyen to cung nhau",m,n);
            break;
        }
    }
    if(!a){ 
        printf("%d va %d la 2 so nguyen to cung nhau",m,n);
    }
    return 0;
}