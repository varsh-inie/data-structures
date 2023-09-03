#include<stdio.h>
int main(){
int a[100], i, n, x;
printf("enter the size of the array");
scanf("%d", &n);
printf("enter the elements:");
for(i=0;i<n;i++){
	scanf("%d", &a[i]);
}
printf("enter the value to be searched:");
scanf("%d", &x);
for(i=0;i<n;i++){
	if(a[i]==x){
		printf("%d is present in location %d",x,i+1);
		break;
	}}
	

if(i==n){
	printf("%d is not present in location",x);
	
}
return 0;
}