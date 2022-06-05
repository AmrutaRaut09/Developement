// Display number divisible by 5
//
#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iSize)
{
	int iCnt=0;
	int iDiff=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if((Arr[iCnt])%5==0)
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
	
	printf("Enter of Elements of array:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	printf(" Number Divisible by 5 are: ");
	Display(Ptr, iSize);

	free(Ptr);
	
	
	return 0;
}
