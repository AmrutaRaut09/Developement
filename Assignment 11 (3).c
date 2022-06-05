//Difference between Largest and smallest number from the list
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{	
	int iCnt=0,iDiff=0;
	int iMin=Arr[0];
	
	int iCnt1=0;
	int iMax=Arr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	for(iCnt1=0;iCnt1<iSize;iCnt1++)
	{	
		if(iMax<Arr[iCnt1])
		{
			iMax=Arr[iCnt1];
		}
	}	
	iDiff=iMax-iMin;
	
  return iDiff;
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
	iRet=Difference(Ptr, iSize);
	printf("Difference is %d",iRet);
	return 0;
}
