#include <stdio.h>

void increasing(int n){
    int st=n;
    int a,b;
    a=n%10;
    b=a;
    n/=10;
    while(n>0){
        a=n%10;
        if(b<a){
            n /=10;
            b=a;
            continue;
        }
        else{
            printf("%d khong xap xep theo thu tu tang dan",st);
            break;
        }
    }
    if(a==b){
        printf("%d xap xep theo thu tu tang dan",st);
    }
}

void theFirstNumber(int n){
    int st=n;
    while(n>10){
        n /=10;
    }
    printf("chu so dau tien cua %d la %d ",st,n);
}

void countTheFirstNumber(int n){
    int st=n;
    int count=0,a;
    while(n>10){
        n/=10;
    }
    do{
        a=st%10;
        if(a-n==0){
            count++;
        }
        st/=10;
    }while(st>0);
    printf("co %d chu so giong chu so dau tien",count);
}

int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d",&n);
    increasing(n);
    printf("\n");
    theFirstNumber(n);
    printf("\n");
    countTheFirstNumber(n);
    return 0;
}