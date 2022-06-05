//
#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[],int iSize,int iNo1,int iNo2)
{
	int iCnt=0,iPos=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if(((Arr[iCnt])>iNo1)&&(Arr[iCnt])<iNo2)
		{
			printf("%d\n",Arr[iCnt]);
		}
		else
		{
			iPos=-1;
		}
	}
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
	printf("Enter Start point");
	scanf("%d",&iNo1);
	printf("Enter End point");
	scanf("%d",&iNo2);
    DisplayRange(Ptr, iSize, iNo1,iNo2);
	
	free(Ptr);	
	return 0;
}
