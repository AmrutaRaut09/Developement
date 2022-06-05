//Program to Accept Character from user and convert Case of that Character
// Input =A
//Output =a
#include<stdio.h>

void DisplayConvert(char cValue)
{
	if(cValue>=65&& cValue<=90)
	{
		cValue=cValue+32;
		printf("%c",cValue);
	}
	else if(cValue>=97&&cValue<=122)
	{
		cValue=cValue-32;
		printf("%c",cValue);
	}
}

int main()
{
	char cValue='\0';
	printf("\n Enter Character to convert Case:");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
	
}
