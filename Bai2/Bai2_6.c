#include<stdio.h>

int main(){
    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("nhap so nguyen duong n: ");
        scanf("%d",&n);
    }

    int i,S=0;
    for(i=1;i<n;i++){
        if(i%7==0){
            S+=i;
        }
    }
    printf("tong S= %d",S);
    return 0;
}