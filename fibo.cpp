#include<stdio.h>
int main(){
	int i,a=0,b=1,c,n;
	printf("enter a number");
	scanf("%d", &n);
	printf("fibonacci series is");
	printf("%d %d",a,b);
	for(i=0;i<n;i++){
		c=a+b;
		printf(" %d ", c);
		a=b;
		b=c;
}
	return 0;
}
