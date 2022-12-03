#include <stdio.h>

void demSo(int n){
    int count=0;
    int st=n;
    while(n>0){
        n/=10;
        count++;
    }
    printf("%d co %d chu so",st,count);
    printf("\n");
}

void demSoLe(int n){
    int le=0;
    int count=0;
    int st=n;
    while(n>0){
        le=n%10;
        if(le%2!=0){
            count++;
        }
        n/=10;
    }
    printf("%d co %d so le",st,count);
    printf("\n");
}

void trungBinhCong(int n){
    int count=0;
    int a=0;
    int st=n;
    float tB;
    while(n>0){
        a=a+n%10;
        count++;
        n/=10;
    }
    tB=(float)a/count;
    printf("Trung binh cong cua cac chu so %d la %0.2f",st,tB);
}

int main(){
    int n;
    printf("Nhap so n ");
    scanf("%d",&n);
    demSo(n);
    demSoLe(n);
    trungBinhCong(n);
    return 0;
}