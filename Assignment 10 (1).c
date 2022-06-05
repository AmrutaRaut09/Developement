// Check user accepted numbers presence in given list.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iSize,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])==iNo)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}

int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	BOOL bRet=FALSE;
	int iCnt=0,iNo=0;
	printf("Enter Number of Elements of array:\n");
	scanf("%d",&iSize);
	Ptr = (int *)malloc(sizeof(int)*iSize);
	if(Ptr==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	printf("Enter of Elements of array:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	printf("Enter number to to check in list:");
	scanf("%d",&iNo);
	bRet= Check(Ptr, iSize, iNo);
	if(bRet==TRUE)
	{
		printf("%d is present in given array..",iNo);
	}
	else
	{
		printf("%d not present in given array..",iNo);
	}
	free(Ptr);	
	return 0;
}
