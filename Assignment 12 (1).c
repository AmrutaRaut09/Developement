#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	char ch='A';
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number to display letters upto.");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}