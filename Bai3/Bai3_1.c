#include <stdio.h>

int main(){
    int m,n,i,j;
    printf("Nhap 2 so m,n: ");
    scanf("%d%d",&m,&n);

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n",i);
    }
    return 0;
}