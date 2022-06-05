//Program to accept number from user, print number of even factors of that number.
#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=0;
	int iNum=2;
	for(iCnt=1;iCnt<=iNo;iCnt++)		
	{
		if((iNum%2)==0)
		{
			printf("\t%d",iNum);
			iNum=iNum+2;
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);

	return 0;
}