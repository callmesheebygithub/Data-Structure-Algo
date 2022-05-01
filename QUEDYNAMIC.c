//MUHAMMAD SHOAIB B(20103053)
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node*front=NULL;
struct node*rear=NULL;

void queue(){
	struct node * newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nENTER DATA\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==NULL && rear==NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
	
}
void dequeue(){
	struct node * temp;
	temp=front;
	if(temp==NULL){
		printf("\nQUEUE UNDERFLOW");
	}
	else{
	
	front=front->next;
	free(temp);
}
	
	
	
}
void display(){
	struct node*temp;
	int i=0;
	temp=front;
	if (temp==NULL){
		printf("\nQUEUE OVERFLOW");
	}
	else{
	
	while(temp!=NULL){
		i++;
		printf("\n%d -> at index %d\t",temp->data,i);
		temp=temp->next;
	}
}
}


int main(){
	int ch;
	do{
		printf("\n WHAT DO YOU WANT\n 1)QUEUE\n2)DEQUEUE\n3)DISPLAY\n4)EXIT\n");
		
		scanf("%d",&ch);
		switch(ch){
			case 1:
				queue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nGOOD BYE\n");
				
		}
	}while(ch!=0);
	return 0;
}
