//Display  number which is Multiples of 11

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iSize)
{
	int iCnt=0;
	int iDiff=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])%11==0)
		{
			printf("\n %d",Arr[iCnt]);
		}
	}
}

int main()
{	
	int iSize=0;
	int *Ptr=NULL;
	int iCnt=0;
	printf("Enter Number of Elements of array:\n");
	scanf("%d",&iSize);
	Ptr = (int *)malloc(sizeof(int)*iSize);
	if(Ptr==NULL)
	{
		printf("Unable to allocate memory..\n");
	}
	else
	{
	printf("Enter of Elements of array:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	printf(" Number Multiples of 11 Are: ");
	Display(Ptr, iSize);

	free(Ptr);
	
	}
	return 0;
}
