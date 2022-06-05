//Diff between enev number sum and od number sum.
//
#include<stdio.h>
#include<stdlib.h>

 
int Display(int Arr[],int iSize)
{
	int iCnt=0;
	int iEvenSum=0; 
	int iOddSum=0;
	int iDiff=0;
	for(iCnt=0;iCnt<=iSize;iCnt++)
	{
		if((Arr[iCnt])%2==0)
		{
			iEvenSum = iEvenSum+Arr[iCnt];
		}
		else 
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	
		printf("\nEven sum= %d",iEvenSum);
		printf("\nOdd sum= %d",iOddSum);
		iDiff = iEvenSum - iOddSum;
	return iDiff;
}

int main()
{	
	int *Ptr=NULL;
	int iSize=0;
	int iRet=0,iCnt=0;
	printf("Enter Number of Elements of array:\n");
	scanf("%d",&iSize);
	Ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter of Elements of array:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	iRet=Display(Ptr, iSize);
	printf("\nDifference is: %d",iRet);
	free(Ptr);
	
	
	return 0;
}
