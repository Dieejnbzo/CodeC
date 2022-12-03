// xac dinh so am duong va chan le
#include <stdio.h>

int main() {
    int n;
    printf("nhap so nguyen n=");
    scanf("%d",&n);
    
    if(n>0){
        printf("%d la so duong",n);
    }
    else if(n==0){
        printf("%d khong la so am khong la so duong",n);
    }
    else{
        printf("%d la so am",n);
    }

    if(n%2==0){
        printf("\n%d la so chan",n);
    }
    else{
        printf("\n%d la so le ",n);
    }
    return 0;
}