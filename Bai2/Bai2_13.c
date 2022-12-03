#include <stdio.h>

int main(){
    int n,m,dao;
    printf("nhap so n>0: ");
    scanf("%d",&n);

    m=n;
    dao=0;
    while(m>=1){
        dao=dao*10 + m%10;
        m=m/10;
    }
    if(n-dao==0){
        printf("%d la so thuan nghich",n);
    }else{
        printf("%d khong la so thuan nghich",n);
    }
    return 0;
}