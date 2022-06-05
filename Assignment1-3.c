//Program to print 5 to 1 numbers on screen


#include<stdio.h>

	void Display()
	{
		int iCnt=1;
		int iNo=5;
			for(iNo=5;iNo>=iCnt;iNo--)
			{
				printf("\n%d",iNo);
			}
	}		
	int main()
	{
		 Display();	// Function Call
		
		return 0;		
	}