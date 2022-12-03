#include <stdio.h>

int main() {
    int a,b;
    printf("nhap so a: ");
    scanf("%d",&a);
    printf("\nnhap so b:");
    scanf("%d",&b);
    printf("\nphuong trinh la %dx+%d=0",a,b);

    if(a==0&&b==0){
        printf("\nphuong trinh co vo so nghiem");
    }
    else if(a==0){
        printf("\nphuuong trinh vo ly");
    }
    else{
        float x=(float)-b/a;
        printf("\nnghiem cua phuong trinh x=%0.2f",x);
    }
    return 0;
}