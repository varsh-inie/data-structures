#include<stdio.h>
int main(){
	int i,j,m,n,k,l, a[10][10],b[10][10],c[10][10];
	printf("enter the size of A,b and c matrix:");
	scanf("%d %d %d",&n, &m,&l);
	
	
	printf("for matrix A");
	for(i=0;i<n;i++){	
   	for(j=0;j<m;j++){
	scanf("%d", &a[i][j]);
  }
}
printf("for matrix B");
for(j=0;j<m;j++){
	for(k=0;k<l;k++){
		scanf("%d", &b[j][k]);
	}
}

for(i=0;i<n;i++){
	for(k=0;k<l;k++){
		c[i][k]=0;
		for(j=0;j<m;j++){
			c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
		}
	}
}
printf("final matrix c");
for(i=0;i<n;i++){
	for(k=0;k<l;k++){
		printf("%d\t", c[i][k]);
			}
		printf(" \n ");
}
return 0;
	
}
