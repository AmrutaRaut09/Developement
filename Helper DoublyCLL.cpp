#include<stdio.h>
#include "Header DoublyCLL.h"

DoublyCLL :: DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	CountNode = 0;
}
void DoublyCLL:: InsertFirst(int no)
{
	PNODE newn = NULL;
	newn = new NODE;
	newn->data = no;
	newn->prev=NULL;
	newn->next=NULL;
	
	if(CountNode == 0)	//if((Head == NULL)&&Tail==NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
	   newn->next =Head;
	   Head->prev =newn;
	   Head = newn;
	}
	Head->prev = Tail;
	Tail->next = Head;
	
	CountNode++;
}
void DoublyCLL :: InsertLast(int no)
{
	PNODE newn = NULL;
	newn = new NODE;
	newn->data = no;
	newn->prev=NULL;
	newn->next=NULL;
	
	if(CountNode == 0)	//if((Head == NULL)&&Tail==NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail->next=newn;
		newn->prev=Tail;
		newn->next =  Head;
		Tail = newn;
	}
	
	Head->prev = Tail;
	Tail->next = Head;
	
	CountNode++;
}
void DoublyCLL :: InsertAtPos(int no,int pos)
{
	if((pos<1)||(pos>CountNode+1))
	{
		cout<<"Invalid Position\n";
		return;
	}
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==CountNode+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn = NULL;
		newn = new NODE;
		newn->data = no;
		newn->prev=NULL;
		newn->next =NULL;
		
		PNODE temp = Head;
		
		for(int i=1;i<pos-1;i++)
		{
			newn->next = temp->next;
			temp->next->prev = newn;
			temp->next = newn;
			newn->prev = temp;	
			CountNode++;
		}
	}
}		
void DoublyCLL :: DeleteFirst()
{
	if(CountNode == 0)
	{
		return;
		//LL is empty
	}
	else if(CountNode==1)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}
	else
	{
		Head = Head->next;
		delete Tail->next;	//Delete Head->prev
	}
		Tail->next = Head;
		Head->prev = Tail;	
		CountNode--;
	
}
void DoublyCLL :: DeleteLast()
{	
	if(CountNode == 0)
	{
		return;
		//LL is empty
	}
	else if(CountNode==1)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}
	else
	{
		Tail = Tail->prev;	
		delete Tail->next;	//Head->prev;	
	}	
	Tail->next = Head;
	Head->prev = Tail;
	CountNode--;
}

void DoublyCLL::DeleteAtPos()
{

	if((pos<1)||(pos>CountNode+1))
	{
		cout<<"Invalid Position\n";
		return;
	}
	if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==CountNode)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = Head;
		
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next = temp->next->next;
		delete	temp->next->prev;
		temp->next->prev = temp;
		CountNode--;
	}
}

void DoublyCLL :: Display()
{
	int i=0;
	PNODE temp = Head;
	
	for(i=0;i<=CountNode;i++)
	{
		cout<<"|"<<temp->data<<"|";
		temp = temp->next;
	}
	cout<<"\n";
}
			
int DoublyCLL :: Count()
{
	return CountNode;
}
