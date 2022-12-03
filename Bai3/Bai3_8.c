#include <stdio.h>

void soNguyenTo(int n){
    int i;
    for(i=2;i<=n;i++){
        if(n%i==0){
            break;
        }
    }
    if(n/i==1){
        printf("%d ",n);
    }
}

int main(){
    int a,b,i;
    printf("Nhap 2 so a,b va a<b: ");
    scanf("%d%d",&a,&b);
    while(a>b){
        printf("Nhap 2 so a,b va a<b: ");
        scanf("%d%d",&a,&b);
    }
    for(i=a;i<=b;i++){
        soNguyenTo(i);
    }
    return 0;
}

