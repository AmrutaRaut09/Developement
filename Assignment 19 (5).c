#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	return iCnt;
}
void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}


void InsertLast(PPNODE head,int no)
{
	PNODE temp=NULL;
	PNODE newn = NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{   
		temp=*head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}
		temp->next=newn;
	}
}

void InsertAtPos(PPNODE head,int no,int pos)
{
	int size=0;
	int iCnt=0;
	size=Count(*head);
	if(pos==1)
	{
		InsertFirst(head,no);
	}
	if(pos==size+1)
	{
		InsertLast(head, no);
	}
	else
	{
		PNODE temp=NULL;
		PNODE newn = NULL;
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

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

int Minimum(PNODE head)
{
	int iCnt=0;
	int iMin=head->data;
	  while(head->next!=NULL)
	  {  
		  if((head->data) < iMin)
		  {
			iMin=head->data;
		  }
		  head=head->next;
	  }
	  return iMin;
}

int main()
{
	
	PNODE first=NULL;
	int iRet=0;

	InsertLast(&first,11);
	InsertLast(&first,230);
	InsertLast(&first,2);
	InsertLast(&first,240);
	InsertLast(&first,30);
	InsertLast(&first,40);
	InsertLast(&first,70);
	
	Display(first);
	
	iRet=Minimum(first);
	printf("\nSmallest number is %d",iRet);
	
	return 0;
}
