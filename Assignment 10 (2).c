// Check user accepted numbers first oc index in given list.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int iNo)
{
	int iCnt=0,iPos=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])==iNo)
		{
			iPos=iCnt;
			return iPos;
		}
		else
		{
			iPos=-1;
		}
	}
	//return iPos;
}
int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	int iRet=0;
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
	iRet= FirstOcc(Ptr, iSize, iNo);
	
	printf("%d is the index of %d..",iRet,iNo);
	
	free(Ptr);	
	return 0;
}
