#include<stdio.h>
int main(){
int n,fact=1,i;
printf("enter n value");
scanf("%d", &n);
for(i=1;i<=n;i++){
	fact=fact*i;
}
printf("%d",fact);
return 0;
}