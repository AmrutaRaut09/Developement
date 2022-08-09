//Generic Data Structure (LINKED LIST)

#include<iostream>

using namespace std;

template <class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
		struct node<T> *Head;
		int Count;
		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T, int);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		void Display();
		int CountNode();
		
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data =no;
	newn->next=NULL;
	
	if(Head == NULL)
	{
		Head =newn;
	}
	else
	{
		newn->next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data =no;
	newn->next=NULL;
	
	if(Head == NULL)
	{
		Head =newn;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no, int pos)
{
	if(pos == 1)
	{
		InsertFirst(no);
	}
	if(pos == (Count+1))
	{
		InsertLast(no);
	}
	else
	{
		int iCnt=0;
		struct node<T> *newn = NULL;
		newn = new node<T>;
	
		newn->data =no;
		newn->next=NULL;

		struct node<T> *temp = Head;
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;		
	}
	Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Elements from SinglyLinear linked list are:"<<endl;
	struct node<T> *temp = Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"--> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T> *temp = Head;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
	   Head = temp->next;
	   free(temp);
	}
	Count--;
}
template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T> *temp = Head;
	if(Head == NULL)
	{
		return;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{	
		struct node<T> *temp = NULL;
		struct node<T> *tempDelete = NULL;
	if(pos == 1)
	{
		DeleteFirst();
	}
	if(pos==(Count+1))
	{
		DeleteLast();
	}
	else
	{
		temp = Head;
		
		for(int iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp = temp->next;
		}
		tempDelete = temp->next;
		temp->next = temp->next->next;
		free(tempDelete);
	}
	Count--;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;

}


int main()
{	
	SinglyLL <int>obj1;
	obj1.InsertFirst(11);
	obj1.InsertLast(21);
	obj1.InsertLast(51);
	obj1.InsertAtPos(101,2);
	//obj1.DeleteFirst();
	//obj1.DeleteLast();
	obj1.DeleteAtPos(3);
	obj1.Display();
	
	int iCount = obj1.CountNode();
	cout<<endl<<"Number of elements from LL: "<<iCount<<endl;
	
	SinglyLL <float>obj2;
	obj2.InsertFirst(11.11);
	obj2.InsertFirst(41.8);
	obj2.InsertLast(21.11);
	obj2.InsertLast(51.11);
	obj2.InsertFirst(60.78);
	obj2.DeleteAtPos(3);
	obj2.DeleteFirst();
	obj2.InsertAtPos(101.2,2);
	
	obj2.Display();
	obj2.CountNode();
	
	iCount = obj2.CountNode();
	cout<<endl<<"Number of elements from LL: "<<iCount<<endl;
	
	SinglyLL <char>obj3;
	obj3.InsertFirst('A');
	obj3.InsertLast('B');
	
	obj3.InsertFirst('D');
	obj3.InsertLast('E');
	
	obj3.InsertAtPos('F',3);
	obj3.Display();
	obj3.DeleteFirst();
	obj3.Display();
	obj3.CountNode();
	iCount = obj3.CountNode();
	cout<<endl<<"Number of elements from LL: "<<iCount<<endl;
	
	return 0;
}

/*
E:\AMRUTA STUDY\3. LOGIC BUILDING>g++ "Linked List Generic.cpp" -o a
E:\AMRUTA STUDY\3. LOGIC BUILDING>a
Elements from SinglyLinear linked list are:
11--> 101--> 51--> NULL

Number of elements from LL: 3
Elements from SinglyLinear linked list are:
41.8--> 101.2--> 21.11--> 51.11--> NULL

Number of elements from LL: 4
Elements from SinglyLinear linked list are:
D--> A--> F--> B--> E--> NULL
Elements from SinglyLinear linked list are:
A--> F--> B--> E--> NULL

Number of elements from LL: 4

*/