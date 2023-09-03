#include<stdio.h>
int main(){
	int n,pos,i,a[10],e;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    
	printf("enter the position to be deleted");
	scanf("%d",&pos);
	
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	
	
	printf("display array\n");
	for(i=0;i<n-1;i++){
		printf("%d",a[i]);
	}
	return 0;
}