
#include<stdio.h>
int main(){
	int a[10];
	int n;
	int odd_c=0,even_c=0;
	printf("enter size of array");
	scanf("%d",&n);

  printf("enter n");
   for(int i=0;i<n;i++){
   scanf("%d",&a[i]);	
}	
   
   for(int i=0;i<n;i++){
   	if(a[i]%2==0){
	   even_c++;
	   
	   }else{
	   
	   	odd_c++;
}
   }
   printf("The number of even numbers:%d",even_c);
   printf("The number of odd numbers:%d",odd_c);
   return 0;
}