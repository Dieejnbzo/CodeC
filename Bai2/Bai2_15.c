#include <stdio.h>

int main(){
    int a,m,n,tach;
    printf("nhap so n>0: ");
    scanf("%d",&n);

    a=0;
    m=n;
    while(m>=1){
        tach=m%10;
        m=m/10;
        a+=tach;
    }
    printf("tong cac so nguyen cua %d= %d",n,a);
    return 0;
}