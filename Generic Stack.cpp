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
class Stack
{
	public:
		struct node<T> *Head;
		int Count;
		Stack();
		void Push(T);		//InsertLast
		void Pop();		//DeleteFirst
		
		void Display();
		int CountNode();
};

template<class T>
Stack<T>::Stack()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data =no;
	newn->next=NULL;
	
	 newn->data = no;
	 newn->next = Head;
	 Head = newn;
	 
	 Count++;
}

template<class T>
void Stack<T>::Pop()
{
	T temp;
	if(Count ==0)
	{
		cout<<"Stack is empty."<<endl;
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
void Stack<T>::Display()
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
int Stack<T>::CountNode()
{
	return Count;
}
int main()
{	
	Stack <char>obj1 ;
	obj1.Push('A');
	obj1.Push('B');
	obj1.Push('C');
	obj1.Push('D');
	obj1.Display();
	cout<<"Number of elements: "<<obj1.CountNode()<<endl;
	obj1.Pop();
	obj1.Display();
	obj1.Pop();
	obj1.Display();
	cout<<"Number of elements: "<<obj1.CountNode()<<endl;
	obj1.Pop();
	obj1.Display();
	cout<<"Number of elements: "<<obj1.CountNode()<<endl;
	return 0;
}

/*
E:\AMRUTA STUDY\3. LOGIC BUILDING>g++ "Generic Stack.cpp" -o m

E:\AMRUTA STUDY\3. LOGIC BUILDING>m
Elements from SinglyLinear linked list are:
D--> C--> B--> A--> NULL
Number of elements: 4
Removed element is:  D
Elements from SinglyLinear linked list are:
C--> B--> A--> NULL
Removed element is:  C
Elements from SinglyLinear linked list are:
B--> A--> NULL
Number of elements: 2
Removed element is:  B
Elements from SinglyLinear linked list are:
A--> NULL
Number of elements: 1
*/