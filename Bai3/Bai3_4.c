#include <stdio.h>

void Draw(int h){
    int i,j,b,c,d;
    i=j=1;
    b=2*h-1;
    c=d=h-1;
    while(j<=b){
        if(d>0){
            printf("  ");
            d-=1;
            continue;
        }
        else{
            do{
                printf("* ");
                i-=1;
            }while(i>0);
        }
        d=c-1;
        c-=1;
        j+=2;
        i=j;
        printf("\n");
    }
}

int main(){
    int h;
    printf("Nhap chieu cao h: ");
    scanf("%d",&h);
    Draw(h);
    return 0;
}  