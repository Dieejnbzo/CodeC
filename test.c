#include <stdio.h>

int main(){
    int i,j,m,n;
    int arr[100][100];
    printf("");
    scanf("%d%d", &m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}