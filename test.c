#include<stdio.h>
void input(int *a, int *n){
	while(*n<1||*n>100){
		printf("Length of array: ");
		scanf("%d", n);
	}
	for(int i=0; i<*n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void appearance(int *a, int n, int x, int count){
    count= 0;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			count+=1;
		}
	}
}
void output(int count){
	printf("Appearance of x: %d", count);
}
int main(){
	int a[100], n;
	input(a, &n);
	int x, count= 0;
	printf("Enter value of x: ");
	scanf("%d", &x);
	appearance(a, n, x, count);
	output(count);
}