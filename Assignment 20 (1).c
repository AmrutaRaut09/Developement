//Program to display perfect number from Linked list
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

int DisplayPerfect(PNODE head)
{
	int iCnt=0;
	int iNo=0,iFactorSum=0;
	iNo=head->data;

	  while(head!=NULL)
	  {
		  iNo=head->data;
			iFactorSum=0;
		for(iCnt=1; iCnt<=(iNo/2); iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iFactorSum=iFactorSum+iCnt;
			}
			if(iFactorSum==iNo)
			{
				printf(" %d ",iNo);
			}
		}
		head=head->next;
	}
}
int main()
{
	
	PNODE first=NULL;
	int iRet=0;
	int iPos=0,iNo=0;
	InsertFirst(&first,11);
	InsertFirst(&first,28);
	InsertFirst(&first,17);
	InsertFirst(&first,41);
	InsertFirst(&first,6);
	InsertLast(&first,89);
	
		Display(first);
		iRet = Count(first);

    	DisplayPerfect(first);
	
	return 0;
}
