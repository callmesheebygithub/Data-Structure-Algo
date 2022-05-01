#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node* start=NULL;
struct node*current;
void insert(){
	int input;

while(input){
struct node*newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter data\t");
 scanf("%d", &newnode->data);
 newnode->next=NULL;
 if (start==NULL){
 	start=current=newnode;
 }
 else{
 	current->next=newnode;
 	current=newnode;
 }
	printf("if you want to insert data press (1) otherwise press(0)\t");
 	scanf("%d",&input);

}
}
void display(){
	int choice=0;
	current=start;
	while(current!=NULL){
		choice++;
		printf("\nyour inserting data %d at index %d\t", current->data, choice);
		current=current->next;
	}
}

int main(void){
	
	
	insert();
	printf("Display\n");
	display();		
	return 0;
}
