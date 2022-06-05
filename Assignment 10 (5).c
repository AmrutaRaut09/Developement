
//Display items between range given.

#include<stdio.h>
#include<stdlib.h>

int MultOdd(int Arr[],int iSize)
{
	int iCnt=0,iPos=0;
	int iMult=1;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])%2!=0)
		{
			iMult=iMult*Arr[iCnt];
		}
		else
		{
			iPos=-1;
		}
	}
	return iMult;
}
int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	int iRet=0;
	int iCnt=0,iNo1=0,iNo2=0;
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
	iRet=MultOdd(Ptr, iSize);
	printf("\n%d",iRet);
	
	free(Ptr);	
	return 0;
}
