#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node * root=NULL;
void creation()
{
struct node * newnode;
newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\t");
	scanf("%d",&newnode->data);
//newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;
//now condition start
if (root==NULL)
{
	root=newnode;
}
else
{
//	printf("\n%d\n",root->data);
	struct node *temp;
	temp=root;
	while(1)
	{
		if(temp->data>newnode->data)
		{
			if(temp->left==NULL)
			{
				temp->left=newnode;
//				printf("\nleft pehle node k bad newnode 1st child");
				break;
			}
			else
			{
				temp=temp->left;
//				printf("\npehle node k bad newnode -> child");
			}
		}
		else
		{
			if(temp->right==NULL)
			{
				temp->right=newnode;
//				printf("\nright pehle node k bad newnode 1st child");
				break;
			}
			else
			{
				temp=temp->right;
//				printf("\nright pehle node k bad newnode -> child");
			}
		}
	}
}
}
void search(int key)
{
	struct node*temp=root;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("Value Found ->%d\t",key);
			break;
		}
		if(temp->data>key)
		{
			temp=temp->left;
		}
		if(temp->data<key)
		{
			temp=temp->right;
		}
	}
	if(temp==NULL){
	printf("Value Not Found");
}
	
}

//struct node* search(int data){
//   struct node *current = root;
//   printf("Visiting elements: ");
//	
//   while(current->data != data){
//	
//      if(current->data== data) {
//         printf("%d ",current->data);
//			
//         //go to left tree
//         if(current->data > data){
//            current = current->left;
//         }//else go to right tree
//         else {                
//            current = current->right;
//         }
//			
//         //not found
//         if(current == NULL){
//        	printf("\nValue Not Found\n");
//        	break;
//         }
//      }			
//   }
//   return current;
//}


//struct node* deletenode(int del)
//{
//	// case 1 -> 0 child
//	struct node * temp=root;
//	if(temp->data<del)
//	{
//		deletenode(temp->left,del);
//	}
//	else if(temp->data>del)
//	{
//		deletenode(temp->right,del);
//	}
//	else
//	{
//		
//	}
//}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}
// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->data)
    root->left = deleteNode(root->left, key);
  else if (key > root->data)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->data = temp->data;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}


void inorder( struct node *root){ // Function to print BST inorder-wise
    if( root != NULL ){
        inorder(root->left);
        printf("%d ->  ",root->data);
        inorder(root->right);
}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ->  ",root->data);
	
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ->  ",root->data);
		preorder(root->left);
		preorder(root->right);
		
	
	}
}
int main(){
	int y,x,a,searc,del;
	do{
		printf("\nWhat Do You Want\n1)INSERTION\n2)Search\n3)Delete\n4)DISPLAY\n5)EXIT\n");
		scanf("%d",&y);
		switch(y){
			case 1:

				creation();
				break;
			case 2:
				
				printf("\nEnter Search Value");
				scanf("%d",&searc);
				search(searc);
				break;
			case 3:
				printf("\nEnter Delete Value");
				scanf("%d",&del);
				deleteNode(root,del);
				break;
				
			case 4:
				do{
					printf("\nwhich do you want\n1)inorder\n2)preorder\n3)postorder\n4)exit");
					scanf("%d",&a);
					switch(a){
						case 1:
							inorder(root);
							break;
						case 2:
							preorder(root);
							break;
						case 3:
						postorder(root);
						break;
						default:
							printf("\nGOOD BYE\n");			
					}
				}while(a<4);

			default:
				printf("\nGOOD BYE\n");
		}
	}while(y!=0);
	return 0;	
}

