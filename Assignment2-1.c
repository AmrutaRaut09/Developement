//Program to display N number of times * on screen
// 1 2 3 4 5
#include<stdio.h>

void Display(int iNo)
{
		int iCnt1=0;
		for(iCnt1=1;iCnt1<=iNo;iCnt1++)
		{
			printf("*\t");
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