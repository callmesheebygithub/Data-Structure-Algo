#include<stdio.h>
#include<stdlib.h>
int main(){

int array[]={2,3,4,5,6,7,8,9,0};
int size=sizeof(array)/sizeof(array[0]);
int search,i,mid,left,right;
printf("\n Enter Searching Value\n");
scanf("%d",&search);
left =0;  right=0; 
for(i=0;i<size;i++){
	mid=(left+right)/2;
	if (array[i]==search){
		printf("Value Found At index -> %d\n",i);
		break;
	}
	else if(array[i]<search){
		right=mid+1;
	}
	else{
		left=mid-1;
	}
}
if(i==size){
	printf("\nValue not found at any index\n");
}


return 0;

}
