//Program to display Prime number from Linked list
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

void DisplayPrime(PNODE head)
{
	int iCnt=0;
	int iNo=0;
	iNo=head->data;

	  while(head!=NULL)
	  {
		iNo=head->data;
		for(iCnt=2; iCnt<=(iNo/2); iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				break;
			}
			else
			{
				printf("  %d  ",iNo);
				break;
			}
		}
		head=head->next;
	}
}
int main()
{
	
	PNODE first=NULL;
	int iRet=0;
	int iNo=0;
	InsertFirst(&first,11);
	InsertFirst(&first,20);
	InsertFirst(&first,17);
	InsertFirst(&first,41);
	InsertFirst(&first,22);
	InsertLast(&first,89);
	
		Display(first);
		iRet = Count(first);

    DisplayPrime(first);
	
	return 0;
}
