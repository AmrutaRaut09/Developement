
//PPA Chi Punyayee(15 Vasoooooolllllll)

#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:				//Characteristics
			PNODE Head;
			PNODE Tail;	
	public:					//Behaviours
			SinglyCLL();		//Constructor
			void InsertFirst(int no);
			void InsertLast(int no);
			void InsertAtPos(int no, int pos);
			void DeleteFirst();
			void DeleteLast();
			void DeleteAtPos(int pos);
			void Display();
			int Count();
};

SinglyCLL::SinglyCLL()		//Constructor
{
	Head=NULL;
	Tail=NULL;
}
void SinglyCLL::InsertFirst(int no)
{
	PNODE newn = NULL;
	newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	if((Head == NULL)&& (Tail == NULL))		//if LL is empty
	{
		Head = newn;
		Tail = newn;
	}
	else		//If LL is not empty or contains atleast 1 NODE
	{
		newn->next = Head;
		Head = newn;
	}
	Tail -> next =Head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn = NULL;
	newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	if((Head == NULL)&& (Tail == NULL))		//if LL is empty
	{
		Head = newn;
		Tail = newn;
	}
	else		//If LL is not empty or contains atleast 1 NODE
	{
		Tail->next = newn;
		Tail = newn;
	}
	Tail -> next = Head;				
}
void SinglyCLL::InsertAtPos(int no, int pos)
{
	int iSize = Count();
	if((pos < 1)||(pos>iSize+1))
	{
		cout<<"Invalid position\n";
	}
	else if(pos==1)
	{
		InsertFirst(no);
	}
	
	else if(pos==iSize+1)
	{
		InsertLast(no);
	}
	else
	{
		
	}
}
void SinglyCLL::DeleteFirst()
{
	if(Head==NULL && Tail==NULL)
	{
		return;
	}
	else if(Head==Tail)
	{
		delete Head;
		Head = NULL;
		Tail= NULL;
	}
	else
	{
		Head  = Head->next;
		delete Tail->next;
		Tail->next = Head;
	}
}
void SinglyCLL::DeleteLast()
{
	if(Head==NULL && Tail==NULL)
	{
		return;
	}
	else if(Head==Tail)
	{
		delete Head;
		Head = NULL;
		Tail= NULL;
	}
	else
	{
		PNODE temp = Head;
		while(temp->next != Tail)
		{
			temp = temp->next;
		}
		delete Tail;
		Tail = temp;
		Tail->next = Head;
		
	}
}
void SinglyCLL::DeleteAtPos(int pos)
{
	int iSize = Count();
	if((pos < 1)||(pos>iSize+1))
	{
		cout<<"Invalid position\n";
	}
	else if(pos==1)
	{
		DeleteFirst();
	}
	
	else if(pos==iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp1 = Head;
		int iCnt = 0;
		for(iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		PNODE temp2 = temp1->next;
		temp1->next = temp2->next;
	}
}

/*	Asahi write karu shakto pn karu naye
void SinglyCLL::Display()
{
	PNODE temp = Head;
	while(temp!=Tail)
	{
		cout<<"|"<<temp->data<<"|";
		temp = temp->next;
	}
	cout<<"|"<<temp->data<<"|";
}

*/
void SinglyCLL::Display()
{
	PNODE temp = Head;
	if(Head==NULL && Tail==NULL)
	{
		return;
	}
	do
	{
		cout<<"|"<<temp->data<<"|"<<"->";
		temp = temp->next;
	}while(temp!=Head);
	cout<<"\n";
}

int SinglyCLL::Count()
{
	int iCnt=0;
	do
	{
		iCnt++;
		Head=Head->next;
		
	}while(Tail!=Head);
	
	return iCnt;
}

int main()
{
	SinglyCLL obj;
	int iRet=0;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);
	obj.InsertLast(211);
	
	obj.Display();	
	//iRet = obj.Count();
	//cout<<"\nNumber of Nodes: "<<iRet<<endl;
	
	obj.DeleteLast();
	
	obj.Display();	
	//iRet = obj.Count();
	cout<<"\nNumber of Nodes: "<<iRet<<endl;
	
	obj.DeleteLast();
	
	obj.Display();	
	//iRet = obj.Count();
	cout<<"\nNumber of Nodes: "<<iRet<<endl;
	
	//obj.DeleteFirst();
	
	obj.DeleteAtPos(3);
	
	obj.Display();	
	//iRet = obj.Count();
	//cout<<"\nNumber of Nodes: "<<iRet<<endl;
	
	return 0;
}