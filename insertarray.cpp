#include<stdio.h>
int main(){
	int n,i,pos,e,a[10];
	printf("enter the size of array:");
	scanf("%d", &n);
	printf("enter the elements in an array:");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("enter the element to be inserted");
	scanf("%d", &e);
	printf("enter the position to be inserted:");
	scanf("%d", &pos);
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
}
		a[pos] = e;
	n=n+1; 
 printf("%d is inserted in position %d",e, pos);

 printf("\ndisplay array:\n");
 for(i=0 ;i<n-1;i++){
 	printf("%d", a[i]);
 }
 return 0;
}