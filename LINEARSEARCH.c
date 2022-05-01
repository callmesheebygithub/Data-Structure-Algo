#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,size,input;
	int array[size];      //={5,3,7,2,9,1,0};
	printf("Enter  array size");
	scanf("%d",&size);
	for (j=0;j<size;j++){
		printf("\nEnter data\n");
		scanf("%d",&array[j]);
	}
//	int size=sizeof(array)/sizeof(array[0]);
	printf("\nENTER SEARCHING VALUE\n");
	int search;
	scanf("%d",&search);
	int flag=0;
	for(i=0;i<size;i++){
		if(array[i]==search){
			printf ("\nvalue found -> at index %d\n",i);
			flag=1;	
		}
	}
	if(flag==0){
			printf("\nVALUE NOT FOUND\n");
		}
	
	return 0;
}
