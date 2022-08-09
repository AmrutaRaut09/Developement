//Enter num to add
// 3
// 1+2+3
#include<stdio.h>

int Addition(int iNo)
{
	
	int iSum=0;
	int iCnt=0;
	if (iNo<0)
	{
			iNo=-iNo;
	}	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number for Addition:\n");
	scanf("%d",&iValue);
	int Addition();
	
	iRet=Addition(iValue);
	
	printf("\nAddition is:%d",iRet);
	return 0;
}