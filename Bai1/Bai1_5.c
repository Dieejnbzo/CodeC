//so sanh 4 so a, b, c, d
#include<stdio.h>

int main(){
    int a,b,c,d;
    int max;
    printf("nhap so nguyen a,b,c,b:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }

    if(max>c){
        max=max;
    }
    else{
        max=c;
    }

    if(max>d){
        max=max;
    }
    else{
        max=d;
    }
    if(a==b && b==c && c==d){
        printf("a,b,c,d bang nhau");
    }
    else{
        printf("%d la gia tri lon nhat",max);
    }
    return 0;
}