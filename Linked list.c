/*
InsertFirst
InsertLast
InsertAtPosition

DeleteFirst
DeleteLast
DeleteAtPosition

Display
Count
*/
#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

int main()
{
	NODE obj;	//Static memory allocation	

	PNODE ptr = (PNODE)malloc(sizeof(NODE));	//Dynamic memory allocation
	
	obj.data=11;	//Direct accessing operator .
	obj.next=NULL;
	
	ptr->data = 11;	//Indirect accessing operator ->
	ptr->next=NULL;
	
	return 0;
}
/*Rules
1.	Use only Dynamic memory allocation
2. Dont write any technical syntax in main()
3. Dont use any global variable
4. Be Careful while manipuating first pointer
5. Pass the 1st pointer directly if the function is not going to modify the Linked list
  (Display, Count)
6. Pass the address  of first pointer is the function is going to modify the linked 
   list(InsertFirst,InsertAtPosition, InsertLast, DeleteAtPosition, DeleteFirst, DeleteLast)

*/
