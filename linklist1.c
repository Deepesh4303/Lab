#include<stdio.h>
#include<stdlib.h>
typedef struct Node Node;
 struct Node 
{
	int data;
	Node* next;
};
Node *start=NULL;

Node* create(int len){
    Node* head = malloc(sizeof(Node));
    Node* cur = head;
    int i;
    for (i = 0; i < len; i++) {
    	printf("enter data \n");
        scanf("%d",&cur->data);
        cur->next = (i < (len - 1)) ? malloc(sizeof(Node)) : NULL;
        cur = cur->next;
    }
    return head;
}

Node* rev(Node* lptr,Node* xptr)   //reversing link list
{
	if(xptr->next==NULL)
{
	xptr->next=lptr;
	return xptr;
}
	Node* temp=xptr->next;
xptr->next=lptr;
return rev(xptr,temp);
}
void prin(Node *lptr) //print the full link list
{
	Node* nptr=lptr;
	while(nptr->next!=NULL)
	{
		printf("%d ",nptr->data);
		nptr=nptr->next;
	}
	printf(" %d \n",nptr->data);
}
Node * print_n(Node* lptr,int n) // print nth node from last
{
	Node* nptr=lptr;
	int count=0;
	
	while(nptr->next!=NULL)
	{
		nptr=nptr->next;
		count++;
	}
	if(count<n)
	{
		printf("invalid");
	}
	n=n+1;
	while(n--)
	{
		nptr=nptr->next;
	}
	printf(" the data is %d",nptr->data);
}
void last(Node * lptr) //last element shift to first
{
	Node* nptr;
	while(nptr->next->next!=NULL)
	{
		printf("%d ",nptr->data);
		nptr=nptr->next;
	}	
	Node *temp;
	temp=nptr->next;
	temp->next=lptr;
	nptr->next=NULL;
	prin(temp);
}
void palin(Node * lptr)
{
/*	make a copy of ll 
	then reverse the copy 
	then check if they r same 
  Node* prev = NULL;
    Node* current = lptr;
    Node* next = NULL;
    while (current != NULL) {
        
        next = current->next;
        current->next = prev;
  
        prev = current;
       
        current = next;
    }
    lptr = prev;
    */
	
}

int main()
{
Node* foo;
foo=create(5); // 5 is our size for now
foo=rev(NULL,foo);
prin(foo);
printf("\n");
prin(foo);

}
