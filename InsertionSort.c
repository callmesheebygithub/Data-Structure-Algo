#include<stdio.h>
#include<stdlib.h>
int array[]={8,4,9,5,2,6,0,1,7,3};
int size=sizeof(array)/sizeof(array[0]);
int i,j;

void display()
{
	for(i=0;i<size;i++){
	printf("%d\t",array[i]);
}
}

void ascending()
{
printf("UNSORTED ARRAY\t");
display();
for(i=1;i<size;i++)
{
	int temp=array[i];
	int j=i-1;
	while(j>=0 && array[j]>temp)
	{
		array[j+1]=array[j];
		j--;

		}
		array[j+1]=temp;
	}
	printf("\nSORTED ARRAY\t");
	display();
}

void decending()
{

printf("UNSORTED ARRAY\t");
display();

for(i=1;i<size;i++)
{
	int temp=array[i];
	int j=i-1;
	while(j>=0 && array[j]<temp)
	{
		array[j+1]=array[j];
		j--;

		}
		array[j+1]=temp;
		
	}
	printf("\nSORTED ARRAY\t");
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
