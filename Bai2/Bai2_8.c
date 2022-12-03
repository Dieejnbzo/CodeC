#include<stdio.h>
int main(){
    int a,b,c,i,max=0,min=0;
    printf("nhap 2 so nguyen a va b:");
    scanf("%d %d",&a,&b);
    while(a<=0 || b<=0){
        printf("nhap 2 so nguyen a va b:");
        scanf("%d %d",&a,&b);
    }

    for(i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0){
            if(i>max){
                max=i;
            }
        }
    }
    for(c=a;c>=a||c>=b;c++){
        if(c%a==0&&c%b==0){
            min=c;
            break;
        }
    }
    printf("boi chung nho nhat cua %d va %d la: %d",a,b,min);
    printf("\nuoc chung lon nhat cua %d va %d la: %d",a,b,max); 
    return 0;   
}
