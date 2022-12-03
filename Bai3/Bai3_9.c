#include <stdio.h>

void Tong(int n){
    int i;
    int S=0;
    for(i=1;i<=n;i++){
        S+=i;
    }
    printf("%d",S);
}

void phanTich(int n){
    int i; 
    int count;
    for(i=2;i<=n;i++){
        count=0;
        while(n%i==0){
            n /=i;
            count++;
        }
        if(count>0){
            printf("%d^%d",i,count);
            if(n>i){
                printf("*");
            }
        }
    }
}

int main(){
    int n;
    printf("Nhap so n>0: ");
    scanf("%d",&n);
    while(n<0){
        printf("Nhap so n>0: ");
        scanf("%d",&n);
    }
    
    Tong(n);
    printf("\n");
    phanTich(n);
    return 0;
}