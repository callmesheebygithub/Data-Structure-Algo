#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
	struct node * prev;
};
struct node*head;
struct node*newnode;
void insertion(){
	int input;
	struct node*temp;
	head=0;
	while(input){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\t");
	scanf("%d", &newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	printf("if you want to insert data press (1) otherwise press(0)\t");
 	scanf("%d",&input);
}
}

void display(){
	struct node*temp;
	int i=0;
	temp=head;
	while(temp!=NULL){
		i++;
		printf("\n %d at index %d ",temp->data,i);
		temp=temp->next;
	}
}
int main(){
	insertion();	
	display();
	
	return 0;
}

