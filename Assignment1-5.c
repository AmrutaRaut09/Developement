//Program to display * on screen with N times.

#include<stdio.h>
#include<conio.h>


void Display(int iNo)		//Define
{
		if(iNo<0)		//Updator
		{
			iNo=-iNo;
		}
			int iCnt=0;
			for (iCnt=1;iCnt<=iNo;iCnt++)
			{
				printf("*\t");
			} 
}
int main()
{
	int iValue=0;
	printf("\n How many times you want to print *  ");
	scanf("%d",&iValue);
	Display(iValue);		//Function Call
	
	return 0;
}
