//Display 3 digit numbers from list
//INPUT		8 676	98	987	777	90
//OUTPUT	676	987	777
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int Arr[], int iSize)
{
	int iCnt=0;
	int iDigiCnt=0;
	int iDigit=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	  while(Arr[iCnt]>0)
	  {
		iDigit=Arr[iCnt]%10;
		Arr[iCnt]=Arr[iCnt]/10;
		iDigiCnt++;
	  }
	  printf("%d",iDigiCnt);
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
	
	DisplayDigit(Ptr,iSize);
	
	return 0;
}