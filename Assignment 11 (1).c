//Return largest number from list.

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[],int iSize)
{
	int iCnt=0;
	int iMax=Arr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}
int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	int iRet=0;
	int iCnt=0;

	printf("Enter Number of Elements of array:\n");
	scanf("%d",&iSize);
	
	Ptr = (int *)malloc(sizeof(int)*iSize);
	printf("Enter of Elements of array:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
		iRet=Max(Ptr, iSize);
		printf("\nMaximum number is:  %d",iRet);
	return 0;
}
