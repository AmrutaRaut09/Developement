#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;		//*
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
void InsertFirst(PPNODE head, int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;		//*
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else		//LL contains atleast 1 node
	{
		newn->next=*head;
		(*head)->prev=newn;	//newn->next->prev=newn
		*head = newn;
	}
}

void InsertLast(PPNODE head, int no)
{
	PNODE newn=NULL;
	PNODE temp = NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;		//*
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else		//LL contains atleast 1 node
	{
		temp=*head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		temp->prev=newn;	//temp->next->prev=
	}
}
void InsertAtPos(PPNODE head, int no,int pos)
{
	int size=0;
	int iCnt=0;
	size  = Count(*head);
	PNODE newn=NULL;
	PNODE temp = NULL;
	if((pos < 1)  || (pos > (size+1)))
	{
		printf("Invalid Position");
		return;
	}
	if(pos==1)
	{
	  InsertFirst(head,no);
	}
	if(pos==(size+1))
	{
		InsertLast(head,no);
	}
	else
	{
	 newn=(PNODE)malloc(sizeof(NODE));
	 temp=*head;
	 newn->data=no;
	 newn->next=NULL;
	 newn->prev=NULL;		//*
		for(iCnt=0;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=temp;	//*
		temp->next=newn;
		newn->prev=temp;		
	}
}

void DeleteFirst(PPNODE head)
{
	if(*head==NULL)
	{
		return;
	}
	if((*head)->next==NULL)
	{
		free(head);
		*head=NULL;
	}
	else
	{
		*head =(*head)->next;	//*
		free((*head)->prev);	//*
		(*head)->prev=NULL;	//*
	}
}
void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	if(*head==NULL)
	{
		return;
	}
	if((*head)->next==NULL)
	{
		free(head);
		*head=NULL;
	}
	else
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

void DeleteAtPos(PPNODE head,int pos)
{
	int size=0;
	int iCnt=0;
	size  = Count(*head);
	PNODE temp = NULL;
	if((pos < 1)  || (pos > (size)))
	{
		printf("Invalid Position");
		return;
	}
	if(pos==1)
	{
	  DeleteFirst(head);
	}
	if(pos == size)
	{
		DeleteLast(head);
	}
	else
	{
	 temp=*head;
	 
	 	for(iCnt=0;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
	}
}
void Display(PNODE head)
{
	printf("\n Elements from Linked list:\n ");
	printf("NULL<-");
	while(head!=NULL)
	{
		printf("|%d|<->",head->data);
		head=head->next;
	}
	printf("NULL");
}

int main()
{
	int iRet=0;
	PNODE first=NULL;
	InsertFirst(&first,21);
	InsertFirst(&first,51);
	InsertFirst(&first,101);
	InsertFirst(&first,111);
	InsertFirst(&first,112);
	InsertFirst(&first,113);
	InsertFirst(&first,114);
	
	Display(first);
	
	iRet=Count(first);
	printf("\nElements count is %d",iRet);
	
	//DeleteFirst(&first);
	//DeleteLast(&first);
	//InsertLast(&first,1);
	//InsertLast(&first,2);

//	Display(first);	
	//InsertAtPos(&first,93,3);	
	//Display(first);
	
	DeleteAtPos(&first,4);	
	Display(first);
	return 0;
}