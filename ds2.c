#include<stdio.h>
int main(){
	int a[10],n;
	printf("enter the size of the array:");
	scanf("%d", &n);
	
	printf("enter array:");
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("rev num:");
	for(int i =n-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
} 