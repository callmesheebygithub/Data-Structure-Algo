#include<stdio.h>
#include<stdlib.h>

void display(int array[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("\n%d sorted array at index-> %d\t",array[i],i);
	}
}

void ascending(int array[],int size){
int i,j, smallindex;
for(i=0;i<size;i++){
	smallindex=i;
	for(j=i+1;j<size;j++){
		if(array[j]<array[smallindex]){
			smallindex=j;
		
		int temp=array[j];
		array[j]=array[i];
		array[i]=temp;
	}
	}
}
}

void descending(int array[],int size){
int i,j, smallindex;
for(i=0;i<size;i++){
	smallindex=i;
	for(j=i+1;j<size;j++){
		if(array[j]>array[smallindex]){
			smallindex=j;
		
		int temp=array[j];
		array[j]=array[i];
		array[i]=temp;	
	}
	}
}	
}

int main(){
	int array[]={6,5,4,3,2,1,7,8,9,0};
	int size=sizeof(array)/sizeof(array[0]);
	int ch;
	do{
		printf("\nWHAT DO YOU WANT\n1)SORTED ARRAY IN ASCENDING ORDER\n2)SORTED ARRAY IN DESCENDING ORDER\n3)DISPLAY\n4)EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				ascending(array,size);
				break;
			case 2:
				descending(array,size);
				break;
			case 3:
				display(array,size);
				break;
			default:
				printf("\nGOOD BYE\n");
		}
	}while(ch!=0);
	
	return 0;
}
