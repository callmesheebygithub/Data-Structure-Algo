#include<stdio.h>
#include<stdlib.h>
int array[]={8,4,9,5,2,6,0,1,7,3};
int size=sizeof(array)/sizeof(array[0]);
int i,j,temp;

void display()
{
	for(i=0;i<size;i++){
	printf("\n%d Sorted Array\t",array[i]);
}
}

void ascending()
{
for(i=0;i<size-1;i++)
{
	for(j=0;j<size-i-1;j++)
	{
		if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}	
	}
	
}
display();
}

void decending()
{
	for(i=0;i<size-1;i++)
	{
	for(j=0;j<size-i-1;j++)
	{
		if(array[j]<array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}	
	}
	
}
display();	
}

int main(){
	int ch;
	do{
		printf("\nWHAT DO YOU WANT\n1)SORTED ARRAY IN ASCENDING ORDER\n2)SORTED ARRAY IN DESCENDING ORDER\n3)EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				ascending();
				break;
			case 2:
				decending();
				break;
			default:
				printf("\nGOOD BYE\n");
		}
	}while(ch!=0);
	
	return 0;
}
