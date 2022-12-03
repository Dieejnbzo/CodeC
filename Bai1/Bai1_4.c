//so sanh 2 so a va b
#include<stdio.h>

int main(){
    int a,b;
    printf("nhap hai so a,b:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a lon hon b");
    }
    else if(a==b){
        printf("a bang b");
    }
    else{
        printf("a be hon b");
    }  
    return 0;
}