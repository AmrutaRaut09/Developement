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
class Queue
{
	public:
		struct node<T> *Head;
		int Count;
		Queue();
		void Enqueue(T);		//InsertLast
		void Dequeue();		//DeleteFirst
		
		void Display();
		int CountNode();
};

template<class T>
Queue<T>::Queue()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
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
void Queue<T>::Display()
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
void Queue<T>::Dequeue()
{
	T temp;
	if(Count ==0)
	{
		cout<<"Queue is empty."<<endl;
		return;
	}
	if(Count == 1)
	{
		temp = Head->data;
		delete Head;
		Head  = NULL;
	}
	else
	{
		temp = Head->data;
		struct node<T> *TempPtr = Head;
		Head = Head->next;
		delete TempPtr;
	}
		Count--;
		cout<<"Removed element is:  "<<temp<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
	return Count;
}
int main()
{	
	Queue <int>qobj1 ;
	qobj1.Enqueue(11);
	qobj1.Enqueue(21);
	qobj1.Enqueue(51);
	qobj1.Enqueue(101);
	qobj1.Display();
	cout<<"Number of elements: "<<qobj1.CountNode()<<endl;
	qobj1.Dequeue();
	qobj1.Display();
	cout<<"Number of elements: "<<qobj1.CountNode()<<endl;
	
	return 0;
}