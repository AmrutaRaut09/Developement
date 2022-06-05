// return frequency of 11 from given list

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
	int iCnt=0,iCount=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])==11)
		{
			iCount++;
		}
	}
return iCount;
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
	iRet= Frequency(Ptr, iSize);
	printf("Frequency of 11 is %d",iRet);
	
	free(Ptr);	
	return 0;
}
