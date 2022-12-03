#include  <stdio.h>

int main(){
    int n,i,a;
    printf("nhap so n: ");
    scanf("%d",&n);
    while(n<=1){
        printf("nhap so n: ");
        scanf("%d",&n);
    }
    printf("so nguyen to cho toi %d bao gom: ",n);
    for(a=2;a<=n;a++){
        for(i=2;i<a;i++){
            if(a%i==0){
                break;
            }
        }
        if(a/i==1){
            printf("%d ",a);
        }
   }
    return 0;
}