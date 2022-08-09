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
			SinglyCLL()		//Constructor
			{
				Head=NULL;
				Tail=NULL;
			}
			void InsertFirst(int no)
			{
				
			}
			void InsertLast(int no)
			{
				
			}
			void InsertAtPos(int no, int pos)
			{
				
			}
			void DeleteFirst()
			{
				
			}
			void DeleteLast()
			{
				
			}
			void DeleteAtPos()
			{
				
			}
			void Display()
			{
				
			}
			int Count()
			{
				int iCnt=0;
				
				return iCnt;
			}
};

int main()
{
	SinglyCLL obj;
	
	return 0;
}