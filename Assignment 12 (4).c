#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}
int main()
{
	int iValue=0;
	printf("Enter number of elements: ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}