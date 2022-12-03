#include<stdio.h>

int main(){
    int n,i;
    printf("nhap so n: ");
    scanf("%d",&n);
    while(n<=0){
         printf("nhap so n: ");
         scanf("%d",&n);
    }
   for(i=2;i<n;i++){
    if(n%i==0){
        printf("%d khong la so nguyen to",n);
        break;
    }
   }
    if(n/i==1){
        printf("%d la so nguyen to",n);
    }
    return 0;    
}