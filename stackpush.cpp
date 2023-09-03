#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size];
void push(){
	int e;
	printf("enter the elements:");
	scanf("%d",&e);
	if(top==size-1){
		printf("stack is full");
		
	}else{
		top=top+1;
		stk[top]=e;
	}
}
void pop(){
	int e;
	if(top==-1){
		printf("the stack is empty:");
	}else{
		e=stk[top];
		top=top-1;
}
	printf("the delected element = %d", e);
}
void peek(){
	if(top==-1){
		printf("stack is empty");
	}else{
		printf("the top for the stack = %d", stk[top]);
	}
}

void display(){
	int i;
	if(top==-1){
		printf("the stack is empty");
	}else {
		for(i=top;i>=0;i--){
			printf("%d\n", stk[i]);
		}
	}
}
int main(){
	int cho;
	do{
		printf("\n***Main Menu***\n");
		printf("\n 1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
		printf("enter the choice");
		scanf("%d", &cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peek(); break;
			case 4:display();break;
			case 5: exit(0);
			default: printf("enter the number between 1 to 5");
		}
		}while(cho>=0 && cho<=5);
		
		}
		
	
