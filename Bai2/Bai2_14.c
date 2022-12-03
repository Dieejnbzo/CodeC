#include <stdio.h>

int main(){
    int n,m;
    unsigned int giaithua=1;
    printf("nhap: ");
    scanf("%d",&n);
    while(n<0){
        printf("nhap: ");
        scanf("%d",&n);
    }

    if(n==0){
        printf("0!=1");
    }

    m=n;
    while(m>0){
        giaithua*=m;
        m-=1;
    }
    printf("%d!= %u",n,giaithua);
    return 0;
}