//Program to display 1 to 5 on screen
// 1 2 3 4 5
#include<stdio.h>

void Display(int iNo)
{
		if (iNo<0)
		{
		iNo=-iNo;
		}
	
		int iCnt1=0;
		for(iCnt1=1;iCnt1<=iNo;iCnt1++)
		{
			printf("%d\t",iCnt1);	
		}		
}
int main()
{
	int iCnt=0;
	printf("Enter counter Number:\n");
	scanf("%d",&iCnt);
	Display(iCnt);
	
	return 0;
}