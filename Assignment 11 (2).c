//Return Smallest number from list.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{	
	int iCnt=0;
	int iMin=Arr[0];
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
}
int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	int iRet=0;
	int iCnt=0,iMin=0;

	printf("Enter Number of Elements of array:\n");
	scanf("%d",&iSize);
	
	Ptr = (int *)malloc(sizeof(int)*iSize);
	printf("Enter of Elements of array:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
		iRet=Minimum(Ptr, iSize);
		printf("\nMinimum number is:  %d",iRet);
	return 0;
}
