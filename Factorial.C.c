#include<stdio.h>
//#include<iostream.h>


int Factorial(int iNo)
{
	int iFact=1;
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		iFact *=i;
		//iFact=iFact*i;
		
	}
	return iFact;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet= Factorial(iValue);
	
	printf("Factorial is:  %d",iRet);
	
	return 0;
}