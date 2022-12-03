//phep cong S= 1+1/2+1/3=...+1/n voi n la so tu nhien                                
#include<stdio.h>

int main(){
    int n;
    printf("nhap so tu nhien n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("nhap so tu nhien n:");
        scanf("%d",&n);
    }

    int i;
    float S=0;
    for(i=1;i<=n;i++){
        S+= (float)1/i; // do i la số nguyên còn S là số thực nên phải ép kiểu
    }
    printf("tong S= %0.2f",S);
    return 0;
}