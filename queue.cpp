#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1,que[size];

void enqueue()
{
	int e;
	printf("enter element");
	scanf("%d",&e);
	if(rear==size-1){
		printf("queue is full");
	}else{
		if(front==-1 && rear == -1)
		{
			front= 0;
			rear = 0;
		}
		else{
		rear = rear+1;
		}
		que[rear] = e;
	
}
}
void dequeue()
{
	int e;
	if(front == -1 && rear == -1){
		printf("queue is empty");
	}
	else{
		e=que[front];
		
		if(front == rear)
		{
		
			front == -1;
			rear == -1;
	    }
		else{
			front = front +1;
		}
	}
}
void display()
{
	int i;
	if(front == -1 && rear==-1){
		printf ("queue is empty");
	}else{
		for(i=front;i<=rear;i++){
			printf("%d", que[i]);
		}
	}
}
int main(){
	int cho;
	do{
		printf("\n***Main Menu***\n");
		printf("\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
		printf("enter the choice");
		scanf("%d", &cho);
		switch(cho)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display(); break;
			case 4:exit(0);break;
			default: printf("enter the number between 1 to 5");
		}
		}while(cho>=0 && cho<=5);
		
		}