#include<stdio.h>
#include<stdlib.h>
#define size 6
int front=-1;
int rear=-1;
int queue[size];
void que(){
	int input;
	printf("\nEnter Data\t");
	scanf("%d",&input);
	if(rear==size-1){
		printf("\nStack Overflow");
	}
	else if(rear==-1 && front==-1){
		rear=front=0;
		queue[rear]=input;
	}
	else{
		rear++;
		queue[rear]=input;
}
}

void deque(){
	if(rear<1){
		printf("\nStack Underflow");
	}
	else{
		rear--;
	}
}
void display(){
	int i;
	for(i=rear; i>=0 ; i--){
		printf("\n%d-> at index %d\t",queue[i],i);
	}
}
int main(){
	int ch;
	do{
	printf("\nwhat you want \n1)QUEUE \n 2)DEQUEUE \n3)DISPLAY \n 4)EXIT\n");
	scanf("%d" ,&ch);
	switch(ch){
		case 1:
			que();
			break;
		case 2:
			deque();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nGOOD BYE");
			break;
		default:
			printf("\nINVALID INPUT");	
		}
	}while(ch!=0);

	return 0;
}
