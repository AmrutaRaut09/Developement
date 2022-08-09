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

void DeleteFirst(PPNODE head)
{
	PNODE temp=NULL;
	temp = *head;
	
	if(*head==NULL)
	{
		return;
	}
	else
	{
	   *head=temp->next;
	   free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=*head;
	
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	//free(temp);
}

void DeleteAtPos(PPNODE head, int pos)
{
	int size=0;
	int iCnt=0;
	
		PNODE temp=NULL;
		PNODE tempdelete=NULL;
		
	size=Count(*head);
	if(pos == 1)
	{
		DeleteFirst(head);
	}
	if(pos==(size+1))
	{
		DeleteLast(head);
	}
	else
	{
		temp=*head;
		
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		tempdelete=temp->next;
		temp->next=temp->next->next;
		free(tempdelete);
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
int main()
{
	
	PNODE first=NULL;
	int ret=0;
	InsertFirst(&first,61);
	InsertFirst(&first,41);
	InsertFirst(&first,11);
	InsertLast(&first,21);
	InsertLast(&first,51);
		Display(first);
	DeleteAtPos(&first,3);
	Display(first);

	InsertFirst(&first,31);
	Display(first);
	
	DeleteAtPos(&first,4);
	Display(first);
	
	
	DeleteFirst(&first);
	DeleteLast(&first);
	Display(first);
	//DeleteLast(&first);
	//DeleteFirst(&first);
	
	InsertAtPos(&first,21,2);
	Display(first);
	
	InsertAtPos(&first,101,2);
	Display(first);
	

	DeleteAtPos(&first,3);
	Display(first);
	
	ret=Count(first);
	printf("\nElements Count: %d\n",ret);
	
	return 0;
}
/*
//OUTPUT
|11|->|41|->|61|->|21|->|51|->NULL

|11|->|41|->|21|->|51|->NULL

|31|->|11|->|41|->|21|->|51|->NULL

|31|->|11|->|41|->|51|->NULL

|11|->|41|->NULL

|11|->|21|->|41|->NULL

|11|->|101|->|21|->|41|->NULL

|11|->|101|->|41|->NULL

Elements Count: 3

*/