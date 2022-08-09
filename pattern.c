// pattern printing

#include<stdio.h>

void Display(int iValue)
{
	int iCnt=0;
	for(iCnt=1; iCnt<=iValue;iCnt++)
	{
		printf("*\t");
	}	
}

int main()
{
	int iValue =0;
	printf("Please enter the value");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;	
}