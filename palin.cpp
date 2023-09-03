#include<stdio.h>
int main(){
	int n,r,sum=0,new1;
	printf("enter n value");
	scanf("%d",&n);
	new1=n;
	while(n!=0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(new1==sum){
		printf("palindrome");
	}else{
		printf("not palindrome");
	}
return 0;
}