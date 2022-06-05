//Program to accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".
// Hello  
//Demo

#include<stdio.h>

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("\nHello");
	}
	else
	{
			printf("\nDemo");
	}
		
}
int main()
{
	int iValue=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	
	return 0;
}