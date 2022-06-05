//Program to display N number of times * on screen
// * * *  *

#include<stdio.h>

void Display(int iNo)
{
	if (iNo<0)
	{
		iNo=-iNo;
	}
	
		while (iNo>0)
		{
			printf("*\t");
			iNo--;
		}
		
}
int main()
{
	int iValue=0;
	printf("Enter counter Number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	
	return 0;
}