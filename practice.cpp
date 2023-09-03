#include<stdio.h>
int main(){
	int a=0,b=1,c,sum=0,n;
	printf("enter n value");
	scanf("%d",&n);
	printf("the fib series is\t");
	while(a<=n){
		printf("%d",a);
		sum+=a;
		c=a+b;
		a=b;b=c;
	}
	printf("sum is %d",sum);
	return 0;
}