#include<stdio.h>

int main(){
    int a,b;
    printf("nhap chieu dai:");
    scanf("%d",&a);
    printf("nhap chieu dai:");
    scanf("%d",&b);

    int C=2*(a+b);
    int S=a*b;
    printf("Chu vi hinh chu nhat C= %d",C);
    printf("\nDien tich hinh chu nhat S= %d",S);
    return 0;
}