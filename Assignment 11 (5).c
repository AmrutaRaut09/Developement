#include<stdlib.h>
#include<stdio.h>

//Display Sum of digits of number from list
// input: 111  21   33   45   56  
//output:  3	3	6	9	11

void DigitSum(int Arr[],int iSize)
{
	int iCnt=0;
	int iDigit=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	  while(Arr[iCnt]>0)
	  {
		iDigit=Arr[iCnt]%10;
		Arr[iCnt]=Arr[iCnt]/10;
		iSum=iSum+iDigit;
	  }
	  printf(" %d\t",iSum);
	  iSum=0;
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
	
	DigitSum(Ptr,iSize);
	
	return 0;
}