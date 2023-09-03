#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node*next;
	
}*head=NULL,*p,*t,*newnode;

void create(){
	int n,i,e;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&e);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=e;
		newnode->next=NULL;
	  if(head==NULL){
	  
	  head=newnode;
	  p=newnode;
}else{
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
	}
}

void display(){
	if(head==NULL)
	printf("the single linked list is empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}

void delete_at_end(){
	printf("enter the element to be deleted");
	scanf("%d",&p);
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	t->next=NULL;
	free(p);
	p=t;
}
int main(){
	int cho;
	do{
		printf("main menu");
		printf("\n1.create\n2.display\n3.delete\n5.exit\n");
		printf("enter yor choice\n");
		scanf("%d",&cho);
		switch(cho){
			case 1:create();break;
			case 2:display();break;
			case 3:delete_at_end(); break;
			case 4:exit(0);
			default: printf("between 1 to 4");
		}
	}
	while(cho>=1&&cho<=4);
}