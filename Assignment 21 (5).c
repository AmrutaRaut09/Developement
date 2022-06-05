//Program to Display Largest Digit of all elements from Singly Linear Linked List

//|32|->|20|->|41|->|414|->|6|->|11|->NULL
//3      2      4     4     6     1

#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int BOOL;

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

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

void DisplaySmall(PNODE head)
{
	int iNo=0,iDigit=0,iDigiSmall=0;
	
	iNo = head->data;
	while(head!=NULL)
	{
		iNo = head->data;
		iDigiSmall = (iNo%10);
		while(iNo>0)
		{			
			iDigit = iNo%10;

			if(iDigiSmall<iDigit)
			{
				iDigiSmall = iDigit;
			}
			iNo=iNo/10;			
		}
		printf("%d\t ",iDigiSmall);
		head = head->next;
	}	
}

int main()
{
	
	PNODE first=NULL;

	InsertFirst(&first,11);
	InsertFirst(&first,6);
	InsertFirst(&first,414);
	InsertFirst(&first,41);
	InsertFirst(&first,20);
	InsertFirst(&first,32);
	
	Display(first);
	
   	DisplaySmall(first);
	
	return 0;
}
