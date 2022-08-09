//Linked list Reverse in place and check loop in the linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
		//head = head -> next;		//optional
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

//Recurssive Display() call
void Display(PNODE head)
{
	if(head!=NULL)
	{
		Display(head->next);    //Tail Recurssion
		printf("|%d|->",head->data);
	}
}
bool Reverse(PPNODE head)
{
	PNODE Previous = NULL;
	PNODE Current = *head;
	PNODE Next = NULL;
	while(Current != NULL)
	{
		Next = Current-> next;
		Current -> next = Previous;
		Previous = Current;
		Current = Next;
	}
	*head = Previous;
}
bool CheckLoop(PNODE head)
{
	PNODE Fast = head;
	PNODE Slow = head;
	bool flag = false;
	
	while((Fast != NULL)&&(Fast->next != NULL))
	{
		Slow = Slow ->next;
		Fast = Fast->next -> next;
		if(Fast == Slow)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

int main()
{
	PNODE first=NULL;
	int ret=0;
	PNODE Last = NULL;
	PNODE Third = NULL;
	
	InsertFirst(&first,60);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	Third = first;
	Last = first;
	
	Third = Third ->next -> next;
	Last = Last ->next -> next -> next;
	Third = Last;
	bool bRet = Reverse(&first);
	if(bRet == true)
	{
		printf("There is Loop in the linked list\n");
	}
	else
	{
		printf("There is NO Loop in the linked list\n");
	}	
	return 0;
}