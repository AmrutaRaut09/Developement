// return frequency of user given number from given list

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
	int iCnt=0,iCount=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])==iNo)
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
	int iNo=0;
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
	printf("Enter number to search its frequency: ");
	scanf("%d",&iNo);
	iRet= Frequency(Ptr, iSize, iNo);
	printf("Frequency of %d is %d in given list",iNo,iRet);
	
	free(Ptr);	
	return 0;
}
