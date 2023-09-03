#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n=5,a[n]={0,5,1,3,7},temp=0;

	for(i=0;i<n-1;i++)
	{
	  
	  	for(j=0;j<n-1-i;j++)
		  {
		
			if(a[j]>a[j+1])
			{
				temp= a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
	return 0;
}