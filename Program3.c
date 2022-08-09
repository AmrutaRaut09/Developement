//Program to display N number of sequence on screen
// 1 2 3 4 5
#include<stdio.h>

void Display(int iNo)
{
		if (iNo<0)
		{
			iNo=-iNo;
		}
	
		int iCnt1=1;
		while(iCnt1<=iNo)
		{
			printf("%d\t",iCnt1	);
			iCnt1++;
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