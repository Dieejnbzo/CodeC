// nhap so tu nhien n va tim so le va chan nho hon n
#include<stdio.h>

int main(){
    int n,i;
    printf("nhap so tu nhien n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("nhap so tu nhien n: ");
        scanf("%d",&n);
    }

    printf("\nso le nho hon n: ");
    for(i=1;i<n;i+=2){
        printf("%d,",i);
    }

    printf("\nso chan nho hon n: ");
    for(i=2;i<n;i+=2){
        printf("%d,",i);
    }
    return 0;
}