#include<stdio.h>

int main(){
    int n,count,i;
    printf("nhap so n: ");
    scanf("%d",&n);
    while(n<0){
        printf("nhap so n: ");
        scanf("%d",&n);
    }

    for(i=2;i<=n;i++){
        count=0;
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                count++;
            }
        }else{
            continue;
        }
        
        if(count>1){
            printf("%d^%d",i,count);
        }
        if(count==1){
            printf("%d",i);
        }
        if(i<n){
            printf(" x ");
        }
    }
    return 0;
}