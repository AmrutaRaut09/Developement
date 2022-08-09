//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE head, int iNo)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *head;
	newn->data = iNo;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while(1)
		{
			if(iNo > temp->data)
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
			else if(iNo < temp->data)
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(iNo == temp->data)	//Duplicate
			{
				free(newn);
				printf("\nData is Already there in list");
			}
		}
	}
}

int CountLeafNode(PNODE head)
{
	static int iCnt=0;
	if(head != NULL)
	{
		if((head->lchild == NULL)&&(head->rchild == NULL))
		{
			iCnt++;
		}
		CountLeafNode(head->lchild);
		CountLeafNode(head->rchild);
	}
	return iCnt;
}

bool Search(PNODE head, int iNo)
{
	if(head == NULL)
	{
		printf("Tree is Empty: \n");
		return false;
	}
	while(head != NULL)
	{
		if(head->data == iNo)
		{
			return true;
			break;
		}
		else if(iNo > head->data) 
		{
			head = head->rchild;
		}
		
		else if(iNo < head->data)
		{
			head = head->lchild;
		}
		if(head == NULL)
		{
			return false;
		}
	}
}
void PreOrder(PNODE head)
{
	if(head != NULL)
	{
		printf("  %d",head->data);
		PreOrder(head->lchild);
		PreOrder(head->rchild);
	}
}
void InOrder(PNODE head)
{
	if(head != NULL)
	{
		InOrder(head->lchild);
		printf("  %d",head->data);
		InOrder(head->rchild);
	}
}

void PostOrder(PNODE head)
{
	if(head != NULL)
	{
		PostOrder(head->lchild);
		PostOrder(head->rchild);
		printf("   %d",head->data);
	}
}

int main()
{
	bool bRet = false;
	PNODE first = NULL;
	Insert(&first,11);
	Insert(&first,21);
	Insert(&first,7);
	printf("\nPostOrder:\n");
	PostOrder(first);
	printf("\n PreOrder:\n");
	PreOrder(first);
	printf("\nInOrder:\n");
	InOrder(first);
	bRet = Search(first, 7);
	
	if(bRet == true)
	{
		printf("\n Element is present in the list\n");
	}
	else
	{
		printf("\n Element is not in the list\n");
	}
	int iRet = CountLeafNode(first);
	printf("Number of leaf nodes: %d",iRet);
		// 7	11	21
		//11	7	21
		//7		21	11
	return 0;
}