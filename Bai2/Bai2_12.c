#include <stdio.h>

int main(){
    int n,i;
    long a,b,c;
    printf("nhap so nguyen duong n: ");
    scanf("%d",&n);
    while(n<0){
        printf("nhap so nguyen duong n: ");
        scanf("%d",&n);
    }

    if(n==0){
        printf("F0= %d",n);
    }
    if(n==1){
        printf("F1= %d",n);
    }
    if(n>=2){
        a=1;
        b=0;
        for(i=2;i<=n;i++){
            c=a; // sử dụng a làm biến trung gian lưu fn-2
            a=a+b;
            b=c;
        }
        i-=1;
        printf("F%d= %d",i,a);
    }
    return 0;
}