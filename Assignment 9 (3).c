// Check 11 present or not in given list

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iSize)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])==11)
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
	int iCnt=0;
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
	bRet= Check(Ptr, iSize);
	if(bRet==TRUE)
	{
		printf("11 is present in given array..");
	}
	else
	{
		printf("11 not present in given array..");
	}
	free(Ptr);	
	return 0;
}
