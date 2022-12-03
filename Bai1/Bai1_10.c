#include<stdio.h>

int main(){
    int a,b,c;
    printf("nhap 3 so nguyen:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b && a>0 && b>0 && c>0 ){
        printf("ba so nguyen %d %d %d tao thanh 1 tam giac ",a,b,c);
    }
    else{
        printf("ba so nguyen %d %d %d khong tao thanh 1 tam giac ",a,b,c);
    }
    return 0;
}