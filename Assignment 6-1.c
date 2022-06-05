// Program to Display Digits in Reverse order
//Input: 34657
//Output: 75643


#include<stdio.h>

void DisplayReverse(int iNo)
{
	//int iCnt=0;
	int iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		iNo=iNo/10;
		printf("%d",iDigit);
	}
	
}
int main()
{
	int iValue=0;
	printf("Enter a number to display its reverse order:");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	
	return 0;
}
//Time Complexity = O(N)