#include<stdio.h>

int main(){
    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("nhap so nguyen duong n: ");
        scanf("%d",&n);
    }

    int i,S=0,a=1;
    for(i=1;i<=n;i++){
        a=a*i;
        S+=a;
    }
    printf("tong S= %d",S);
    return 0;
}