//Accept number from user and display its factors

#include<stdio.h>
void DisplayFactors(int iNo)
{
	
	auto int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}	

int main()
{
	auto int iValue =0;
	printf("\nEnter number:");
	scanf("%d",&iValue);
	DisplayFactors(iValue);
	
	return 0;
}