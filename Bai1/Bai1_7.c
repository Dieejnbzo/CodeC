//tinh chu vi dien tich hinh tron 
#include<stdio.h>

int main(){
    int R;
    const float pi = 3.14;
    printf("nhap ban kinh R = ");
    scanf("%d",&R);
    float C=pi*R;
    float S=pi*R*R;
    printf("Chu vi hinh tron C= %f",C);
    printf("\nDien tich hinh tron S= %f",S);
    return 0;
}