#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,a[5],temp=0,n;

	printf("enter the size of the array");
	scanf("%d",&n);
	
	printf("enter the elements in an array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n-1;i++){
		for(j=i;j>0 && a[j-1]>a[j];j--){
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
	}}
	printf("sorted array\n");
	for(i=0;i<n;i++){
    printf("%d",a[i]);
	}
	getch();
	return 0;
}
