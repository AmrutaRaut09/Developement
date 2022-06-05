//Program to accept 2 number from user and Display First number 
//in second number of times.
//Output
// -90   2
//90   90

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
	
	if (iNo<0||iFrequency<0)		//Value Updater
	{
		iNo=-iNo;
		iFrequency=-iFrequency;
	}
	for(int iCount1=1;iCount1<=iFrequency;iCount1++)
	{
		printf("\t%d",iNo);
		
	}
	
}
int main()
{
	int iValue=0;
	int iCount=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	printf("Enter Counter:\n");
	scanf("%d",&iCount);
	Display(iValue,iCount);
	
	return 0;
}