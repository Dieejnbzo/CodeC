#include <stdio.h>
#include <stdbool.h>

bool thuanNghich(int n){
    int m=n;
    int dao=0;
    while(n>0){
        dao = dao*10 + n%10;
        n /= 10;
    }
    return dao == m;
}

bool chiaHet(int k, int n){
    if(k==0){
        return false;
    }
        return n % k == 0;
}

int main(){
    int k,i;
    printf("Nhap so nguyen duong k: ");
    scanf("%d",&k);
    for(i=10000000;i<=99999999;i++){
        if(thuanNghich(i) && chiaHet(k,i)){
            printf("%d ",i);
        }
    }
    return 0;
}
