//Program to Check Given character is Vowel or not
// a, e, i, o, u

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
	if((cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
		||(cValue=='A'||cValue=='E'||cValue=='I'||cValue=='I'||cValue=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue='\0';
	
	BOOL bRet=FALSE;
	
	printf("Enter Character to check vovel or not:");
	scanf("%c",&cValue);
	
	bRet=CheckVowel(cValue);
	
	if (bRet==TRUE)
	{
		printf("Given Character is Vowel..\n",cValue);
	}
	else
	{
		printf("Given Character is Consonant..\n",cValue);
	}
	
	return 0;
}