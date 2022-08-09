#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node * prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
		private:
			PNODE Head;
			PNODE Tail;
			int CountNode;
			
		public:
		
			DoublyCLL();
			void InsertFirst(int);
			void InsertLast(int);
			void InsertAtPos(int,int);
			
			void DeleteFirst();
			void DeleteLast();
			void DeleteAtPos();
			
			int Count();
			void Display();
};
void DoublyCLL:: InsertFirst(int no)
{
	
}
void DoublyCLL :: InsertLast(int no)
{
	
}
void DoublyCLL :: InsertAtPos(int no,int pos)
{
	
}		
void DoublyCLL:: DeleteFirst()
{
	
}
void DoublyCLL::DeleteLast()
{
	
}

void DoublyCLL::DeleteAtPos()
{
	
}

void DoublyCLL :: Display()
{
	
}
			
int DoublyCLL :: Count()
{
	
	return 0;
}

int main()
{
	
	
	return 0;
}