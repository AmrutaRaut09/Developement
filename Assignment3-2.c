// Program to Print only even factors of user given number
// input: 24
//output:   2   4	6	8	12
#include<stdio.h>


void PrintEvenFactors(int iNo)
{	
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)		
	{
		if((iNo%iCnt)==0 && (iCnt%2)==0 )
		{
			printf("\t%d",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	PrintEvenFactors(iValue);

	return 0;
}