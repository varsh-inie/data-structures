#include<stdio.h>
int main(){
	int a[50],n;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements in an array");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		 if(a[i]%2==0){
		 	printf("number is even",a[i]);
		 }else{
		 	printf("number is odd",a[i]);
		 }
	}
	return 0;
}