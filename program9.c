#include<stdio.h>
#include<stdbool.h>


int CountFactors(int iNo)
{
	
	int iCnt=0;
	int iFactorCnt=0;
	for(iCnt=2; iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iFactorCnt++;
		}
	}
	return iFactorCnt;
}

bool CheckPrime(int iNo)
{
	int iResult=0;
	iResult= CountFactors(iNo);
	
	if(iResult==0)
	{
			return true;
	}
	else 
	{
		return false;
	}
}
		
int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter Number \n");
	scanf("%d",&iValue);
	bRet=CheckPrime(iValue);
		
	if (bRet==true)
	{
		printf("%d  Number is prime",iValue);
	}
	else
	{
		printf("%d  Number is not prime",iValue);
	}
	
	return 0;
}