#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,x;
    printf("nhap ba so a,b,c ");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nphuong trinh bac 2 la: %0.2fx^2 + %0.2fx +%0.2f = 0",a,b,c);
    
    if(a==0 && b==0 && c==0){
        printf("\nphuong trinh co vo so nghiem");
    }
    else if(a==0 && b==0){
        printf("\nphuong trinh vo ly khong co nghiem");
    }
    else if(a==0){
       x=-c/b;
        printf("\nnghiem cua phuong trinh la x=%0.2f",x);
    }
    else{
        float delta = (b*b)-4*a*c;
        printf("\ndelta cua phuong trinh la: %0.2f",delta);
        if(delta>0){
            float x1=(-b + sqrt(delta))/(2*a);
            float x2=(-b - sqrt(delta))/(2*a);
            printf("\nnghiem thu nhat cua phuong trinh x1= %0.2f",x1);
            printf("\nnghiem thu hai cua phuong trinh x2 = %0.2f",x2);
        }
        else if(delta==0){
            float xk=-b/(2*a);
            printf("\nnghiem kep cua phuong trinh la x= %0.2f",xk);
        }
        else{
            printf("\nphuong trinh vo nghiem");
        }
    }
    return 0;
}