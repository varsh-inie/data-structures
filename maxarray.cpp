#include<stdio.h>
int main(){
	int n,i,max=0,min=9999,diff, a[100];
	printf("enter the size of array:");
	scanf("%d", &n);
	printf("elements in an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]>max){
	max=a[i];
		}if(a[i] < min){
		min=a[i];
		}
}
diff=max-min;
printf("the max number is %d\n", max);
printf("the min number is %d\n", min);

printf("the diff %d-%d = %d",max,min, diff);
return 0;
			
	
	}
