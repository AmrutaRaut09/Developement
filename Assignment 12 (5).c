#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	int iValue=2;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iValue);
		iValue=iValue+2;
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