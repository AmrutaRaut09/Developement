//Program to check first occurence of n number in LL
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

int SearchFirstOcc(PNODE head,int no)
{
	int iCnt=0;
	while(head!=NULL)
	  {
		iCnt++;
		if(head->data==no)
		{
			return iCnt;
		}
		head=head->next;
	  }
		
}

int main()
{
	
	PNODE first=NULL;
	int iRet=0;
	int iPos=0,iNo=0;
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertLast(&first,11);
	
		Display(first);
		iRet = Count(first);
		printf("Enter element to search its occurence: ");
		scanf("%d",&iNo);
	iPos=SearchFirstOcc(first,iNo);
	
	if(iPos==0)
	{
		printf("Element Not Present\n");
	}
	else
	{
	  printf("Element First Occurence is at position %d",iPos);
	}
	return 0;
}
