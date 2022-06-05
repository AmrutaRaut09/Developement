//Return freq of even numbers

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
	int iCnt=0;
	int EvenCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])%2==0)
		{
			EvenCnt++;
		}
	}
	
	return EvenCnt;
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
	iRet= CountEven(Ptr, iSize);
	printf("\n Even number count: %d\n",iRet);

	free(Ptr);	
	return 0;
}
