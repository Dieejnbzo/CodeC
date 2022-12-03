//tinh phep cong tru nhan chia
#include <stdio.h>

int main() {   
    int a,b;
    printf("nhap so a = ");
    scanf("%d",&a);
    printf("\nnhap so b = ");
    scanf("%d",&b);

    int x,y,z;
    float t;
    x=a+b;
    y=a-b;
    z=a*b;
    t=(float)a/b;
    printf("\nket qua phep cong: %d + %d = %d",a,b,x);
    printf("\nket qua phep tru: %d - %d = %d",a,b,y);
    printf("\nket qua phep nhan: %d * %d = %d",a,b,z);
    if(b==0){
        printf("\nphep chia khong thuc hien duoc");
    }
    else{
        printf("\nket qua phep chia: %d/%d = %f",a,b,t);
    }
    return 0;
}
