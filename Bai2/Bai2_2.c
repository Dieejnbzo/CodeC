// nhap so tu nhien n va tinh tong S= 1+2+..+n
#include<stdio.h>

int main(){
    int n,i;
    int S=0;
    printf("nhap so tu nhien n: ");
    scanf("%d",&n);
     while(n<=0){
        printf("nhap so tu nhien n: ");
        scanf("%d",&n);
    }

    for(i=1;i<=n;i++){
        S+=i;
    }
    printf("tong S= %d",S);
    return 0;
}