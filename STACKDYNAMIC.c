//MUHAMMAD SHOAIB B(20103053)
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*top=NULL;

void push(){

	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nENTER DATA\t");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;

}

void pop(){
	struct node*temp;
	temp=top;
	if (top==NULL){
		printf("\n STACK UNDERFLOW\n");
	}
	else{
		top=top->next;
		free(temp);
	}	
}

void display(){
	struct node*temp;
	temp=top;
	int i=0;
	if(temp==0){
		printf("\nSTACK EMPTY\n");
	}
	else{
	
	while(temp!=NULL){
		i++;
		printf("\n%d-> at index %d\t",temp->data,i);
		temp=temp->next;	
	}
}
	
}

int main(){
	int ch;
	do{
		printf("\n What do You Want\n 1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
			default:
				printf("\nINVALID INPUT\n");
		}
	}while(ch!=0);	
	return 0;
}
