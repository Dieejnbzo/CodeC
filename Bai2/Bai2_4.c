#include<stdio.h>

int main(){
    int n;
    printf("nhap so tu nhien n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("nhap so tu nhien n: ");
        scanf("%d",&n);
    }

    int i,S=0,S1=0,S2=0;
    for(i=0;i<n;i++){
        S+=i;
    }
    printf("\ntong so tu nhien nho hon n S=%d",S);

    for(i=2;i<n;i+=2){
        S1+=i;
    }
    printf("\ntong so tu nhien chan nho hon n S1=%d",S1);
    for(i=1;i<n;i+=2){
        S2+=i;
    }
    printf("\ntong so tu nhien le nho hon n S2=%d",S2);
    return 0;
}