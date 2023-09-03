#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	struct node*left;
	int data;
	struct node*right;
}*root=NULL,*newnode;



struct node*insert_bst(struct node*root,int ele){
	if(root==NULL){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->left=NULL;
		newnode->data=ele;
		newnode->right=NULL;
	    return(newnode);
	}
	else if(ele<root->data){
	    root->left=insert_bst(root->left,ele);
	}
	else if(ele>root->data){
	     root->right=insert_bst(root->right,ele);
	 }
    return(root);
}


void inorder_bst(struct node*root)
{
	if(root!=NULL){
	   inorder_bst(root->left);
	   printf("%d\t",root->data);
	   inorder_bst(root->right);
	   }
}


void preorder_bst(struct node*root){
	if(root!=NULL){
		printf("%d\t",root->data);
		preorder_bst(root->left);
		preorder_bst(root->right);
	}
}


void postorder_bst(struct node*root){
	if(root!=NULL){
		postorder_bst(root->left);
		postorder_bst(root->right);
		printf("%d\t",root->data);
	}
}



int main(){
	int cho,ele;
	do{
		printf("***MAIN MENU***");
		printf("\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT");
		printf("Enter the choice:");
		scanf("%d",&cho);
	switch(cho){
	    case 1:	printf("Enter the element:");
				scanf("%d",&ele);
				root=insert_bst(root,ele);
				break;
	    case 2:inorder_bst(root);break;
	    case 3:preorder_bst(root);break;
	    case 4:postorder_bst(root);break;
	    case 5:exit(0);
	    default:printf("Enter a number between 1 and 5");
	}
}
while(cho>=1 && cho<=5);
}
