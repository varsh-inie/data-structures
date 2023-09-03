#include<stdio.h>
int main(){
	int l,m,x,f,a[10],n,i;
	
	printf("enter the size of the array:");
	scanf("%d", &n);
	
	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("enter the element to be searched:");
	scanf("%d", &x);
	
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l){
		if(a[m]<x){
			f=m+1;
			
		}else if(a[m]==x){
			printf("%d is located in %d", x,m+1);
			break;
		}
		else{
			l=m-1;
			m=f+l/2;
			
		}
		if(f>l){
			printf("%d is not found", x);
		}
		
		
	}
return 0;
}
