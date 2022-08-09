//Sum of factors of a number

#include<stdio.h>

int SumFactors(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=1; iCnt<=(iNo/2) ;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;			
		}
	}
	return iSum;
}


int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter num:\n");
	scanf("%d",&iValue);
	iRet= SumFactors(iValue);
	printf("Addition of Factors of is:%d", iRet);
	
	return 0;
	
}