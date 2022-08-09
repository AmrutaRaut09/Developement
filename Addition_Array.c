////Perform Addition of 'n' numbers
//Accept Array and Display its Addition

#include<stdio.h>
#include<stdlib.h>


int Sumation(int Arr[],int iSize)
{
	int iSum =0,iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];		
	}
	return iSum;
}
int main()
{
	int *ptr=NULL;
	int iSize=0;
	int iCnt=0,iRet=0;
	 printf("Enter Size of Array\n");
	 scanf("%d",&iSize);
	ptr = (int *)malloc(sizeof(int)*iSize);
	 printf("Enter Elemnts: ");
	 for(iCnt=0;iCnt<iSize;iCnt++)
	 {
		scanf("%d",&ptr[iCnt]);
	 }
	 iRet = Sumation(ptr,iSize);
	 printf("Sumation of All elements: %d",iRet);
	 
	return 0;
}