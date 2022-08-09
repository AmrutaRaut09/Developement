// pattern printing
#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2)!=0)
		{
		  printf("%d\t",iCnt);
		}
		else
		{
		  printf("*\t");
		}
	}
}

int main()
{
	int iValue =0;
	printf("Please enter the value: ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;	
}