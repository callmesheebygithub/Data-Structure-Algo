#include<stdio.h>
#include<stdlib.h>
#define size 6
int stack[size];
int top=-1;
void push(){
	int input;
	printf("\nEnter Data\t");
	scanf("%d",&input);
	if(top==size-1){  //size start with 1 jabkey top=-1 thats why i use -1
		printf("\nStack Overflow\t");
	}
	else{
		top++;  //first top -1 pa ha is liye pehley increase than insert
		stack[top]=input;
		
	}
}
void pop(){
	int item; //jo item pop karwaye gey usey variable item ma store karley gey no need to delete bcz garbage ho jaye ga
	if(top==-1){
		printf("\nStack Underflow");
	}
	else{
		item=stack[top];
		top--;
	}
	printf("\n %d-> delete item\t",item);	
}
void display(){
	int i;
	for(i=top; i>=0;i--){
		printf("\n%d-> at index %d\t",stack[i],i);
	}
}
int main(){
	int ch;

	do{
		printf("\nWHAT YOU WANT \n1) PUSH \n2)POP \n3)DISPLAY \n 4)EXIT\n");
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
				printf("\nGOOD BYE\n");
				
		}
	}while(ch!=0);


return 0;
	
}
	
	
