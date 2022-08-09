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

int OccurenceCount(PNODE head, int iNo)
{
	int iCnt = 0;
	
		while(head != NULL)
		{
			if(head->data == iNo)
			{
				iCnt++;
			}
			head = head->next;			
		}
		return iCnt;
}

int SearchLastOcc(PNODE head, int iNo)
{
		int iCnt = 1;
		int iPos = -1;
	
		while(head != NULL)
		{
			if(head->data == iNo)
			{
				iPos = iCnt;
			}
			iCnt++;
			head = head->next;
		}
		if(head == NULL)
		{
			return -1;
		}
		else
		{
			return iPos;
		}
}

int SearchFirstOcc(PNODE head, int iNo)
{
	int iCnt = 1;
	
		while(head != NULL)
		{
			if(head->data == iNo)
			{
				break;
			}
			
			iCnt++;
			head = head->next;			
		}
		if(head == NULL)
		{
			return -1;
		}
		else
		{
			return iCnt;
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
void SumFactors(PNODE head)
{
	int iNo = 0;
	int iSum = 0;
	
	while(head != NULL)
	{
		for(int i = 1, iNo = head->data; i<=iNo/2; i++)
		{
			if(iNo % i == 0)
			{
				iSum = iSum + i;
			}
		}
		printf("%d: %d \n",head->data,iSum);
		head = head->next;
		iSum = 0;
	}
}
void SumDigit(PNODE head)
{
	int iNo = 0, iDigit = 0;
	int iSum = 0;
	while(head != NULL)
	{
		iNo = head->data;
		while(iNo > 0)
		{
			iDigit = iNo%10;
			iSum = iSum + iDigit;
			iNo = iNo/10;
		}
		printf("%d : %d \n",head->data,iSum);
		head = head->next;
		iSum = 0;
	}
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

void DeleteEven(PPNODE head)
{
	PNODE second = NULL;
	PNODE first = NULL;
	//int temp=0;
	if(*head == NULL)
	{
		return;
	}
	if((*head)->next == NULL)
	{
		if(((*head) -> data)%2 == 0)
		{
			free(*head);
			*head = NULL;
			return;
		}
		else
		{
			return;
		}
	}
	first = *head;
	second = (*head)->next;
	PNODE temp;
	while(second != NULL)
	{
		if((second -> data)% 2 ==0 )
		{
			temp = second;
			first = second->next;
			free(temp);
			second = first -> next;
		}
		else
		{
			first = second;
			second = first -> next;
		}
	}
	if(((*head)->data)%2 == 0)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
}

int main()
{
	PNODE first=NULL;
	int ret=0;
	InsertFirst(&first,14);
	InsertFirst(&first,61);
	InsertFirst(&first,12);
	InsertFirst(&first,41);
	InsertFirst(&first,88);
	InsertFirst(&first,5);
	InsertFirst(&first,52);
	
	Display(first);
	
	//SumDigit(first);
	//SumFactors(first);
	//ret = SearchFirstOcc(first,11);
	//ret = SearchLastOcc(first,11);
	//printf("\nElements 1st Occurence: %d\n",ret);
	//printf("\nElements last Occurence: %d\n",ret);
	Display(first);
	DeleteEven(&first);
	Display(first);
	return 0;
}