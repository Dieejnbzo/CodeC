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
    printf("uoc so cua n bao gom: ");
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d,",i);
            S+=1;
        }
    }
    printf("\nco tat ca %d uoc so cua %d",S,n);
    return 0;
}