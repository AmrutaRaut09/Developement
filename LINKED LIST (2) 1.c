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
	 static int iCnt=0;
	if(head!=NULL)
	{
		iCnt++;
		//head=head->next;		//optional
		Count(head->next);
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

void InsertAtPos(PPNODE head,int no,int pos)
{
	int size=0;
	int iCnt=0;
	size=Count(*head);
	if(pos==1)
	{
		InsertFirst(head,no);
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
//Recurssive Display() call
void Display(PNODE head)
{
	if(head!=NULL)
	{
		Display(head->next);    //Tail Recurssion
		printf("|%d|->",head->data);
	}
}

int Max(PNODE head)
{
	int iMax = 0;
	
	if(head != NULL)
	{
		iMax = head->data;
	}
		while(head != NULL)
		{
			if(head->data > iMax)
			{
				iMax = head->data;
			}
			head = head->next;			
		}
		return iMax;
}

int Summation(PNODE head)
{
	int iSum = 0;
	while(head != NULL)
	{
		iSum = iSum + head->data;
		head = head->next;
	}
	return iSum;
}

int main()
{
	
	PNODE first=NULL;
	int ret=0;
	InsertFirst(&first,61);
	InsertFirst(&first,41);
	InsertFirst(&first,11);
	InsertFirst(&first,89);
	InsertFirst(&first,5);
	Display(first);
	ret = Max(first);
	
	printf("\nElements Max: %d\n",ret);
	
	return 0;
}