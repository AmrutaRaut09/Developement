#include<stdlib.h>
#include<stdio.h>

struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));  //newn=(struct node*) malloc(12);
	
	newn->data=no;
	newn->next=NULL;
	if(*head==NULL)		//Linked list is empty
	{
	  *head=newn;
	}
	else				//LL contains atleast 1 node
	{
	  newn->next = *head;
	  *head = newn;
	}
}

void InsertLast(PPNODE head, int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE)malloc(sizeof(NODE));  //newn=(struct node*) malloc(12);
	
	newn->data = no;
	newn->next = NULL;
	if(*head==NULL)		//Linked list is empty
	{
	  *head=newn;
	}
	else		//LL contains atleast 1 node.
	{
	  temp=*head;
	  while(temp->next!=NULL)
	  {
		 temp= temp->next;
	  }
	  temp->next=newn;
	}
}

void Display(PNODE head)
{
	printf("Elements from linked list are:\n"); 
	while(head!=NULL)
	{
		printf("|%d|->\t",head->data);
		head=head->next;		
	}
	printf("NULL");
}

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head = head->next;		
	}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)
	{
		return;
	}
	else
	{
		temp =*head;
		*head=temp->next;
		free(temp); 
	}
  //If LL is empty then Return
  //If LL contains atleast 1 node store the address of second node in first pointer through head
  //And delete the first node
}

void DeleteLast(PPNODE head)
{
  //If LL is empty return;
//If LL contains1 node delete it and return;
//if LL contains more than 1 node then travel till Second Last(N-1) node and delete (Nth)last node.

	PNODE temp = NULL;
	if(*head==NULL)
	{
	  return;
	}
	else if((*head)->next==NULL)
	{
	  free(*head);
	  *head=NULL;		
	}
	else//if LL contains more than 1 node then travel till Second Last(N-1) node and delete (Nth)last node.
	{
		temp=*head;
	  while(temp->next->next!=NULL)
	  {
		  temp=temp->next;	  
	  }
	    free(temp->next);
		temp->next=NULL;
	}
}

void InsertAtPos(PPNODE head,int no,int pos)
{
	//Consider number of nodes are 4
  //if position is invalid then return directly(<1 or >5)
  //if position is one then call InsertFirst()
  //If position is N+1 then call InsertLast(5th)
  int size=0;
  size=Count(*head);
  
  if((pos<1)||(pos>(size+1)))
  {
	  printf("Insertion position is Invalid..!");
	  return;
  }
  if(pos == 1)
  {
	  InsertFirst(head,no);
  }
  
  else if(pos==(size+1))
  {
	  InsertLast(head,no);
  }
  else		//Insert at given position
  {
	  PNODE newn=NULL;
	  newn=(PNODE)malloc(sizeof(NODE));
	  newn->data=no;
	  newn->next=NULL;
	  temp=*head;
	  for(iCnt=1;iCnt<(pos-1);iCnt++)
	  {
		  temp=temp->next;
	  }
	  newn->next=temp->next;
	  temp->next=newn;
  }
}

void DeleteAtPos(PPNODE head, int pos)
{
	//Consider number of nodes are 4
  //if position is invalid then return directly(<1 or >4)
  //if position is one then call DeleteFirst()
  //If position is N then call DeleteLast(pos is 4)
  
  int size=0;
  size=Count(*head);
  
  if((pos<1)||(pos>(size)))
  {
	 printf("Insertion position is Invalid..!");
	 return;
  }
  if(pos == 1)
  {
	  DeleteFirst(head);
  }
  
  else if(pos==size)
  {
	 DeleteLast(head);
  }
  else
  {
	  tempDelete=NULL:
	  temp=*head;
	  
	  for(iCnt=1;iCnt<(pos-1);iCnt++)
	  {
		  temp=temp->next;
	  }
	  tempDelete=temp->next;
	  temp->next=temp->next->next;
	  free(tempDelete);
  }
  
}
int main()
{
	int iRet=0;
	PNODE first = NULL;
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	Display(first);		//Call by Value	
	iRet = Count(first);
	
	InsertFirst(&first,1);
	printf("\nNumber of nodes: %d\n",iRet);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	Display(first);		//Call by Value	
	iRet = Count(first);
	printf("\nNumber of nodes: %d\n",iRet);
	
	DeleteFirst(&first);
	Display(first);		//Call by Value	
	iRet = Count(first);
	printf("\nNumber of nodes: %d\n",iRet);
	
	DeleteLast(&first);
	Display(first);		//Call by Value	
	iRet = Count(first);
	printf("\nNumber of nodes: %d\n",iRet);
	
	DeleteLast(&first);
	Display(first);		//Call by Value	
	iRet = Count(first);
	printf("\nNumber of nodes: %d\n",iRet);
	
	return 0;
	
}