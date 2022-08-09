
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
			void DeleteAtPos();
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
	
}
void SinglyCLL::InsertLast(int no)
{
				
}
void SinglyCLL::InsertAtPos(int no, int pos)
{
				
}
void SinglyCLL::DeleteFirst()
{
				
}
void SinglyCLL::DeleteLast()
{
				
}
void SinglyCLL::DeleteAtPos()
{
	
}
void SinglyCLL::Display()
{
	
}
int SinglyCLL::Count()
{
	int iCnt=0;
				
				
	return iCnt;
}

int main()
{
	SinglyCLL obj;
	
	return 0;
}