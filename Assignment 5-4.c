// Display Non Factors of a number.

#include<stdio.h>

int SumNonFactor(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
    int iCnt=0;
	int iSum=0;
    
    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0 )
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
    printf("Enter Number:  ");
    scanf("%d",&iValue);

	iRet=SumNonFactor(iValue);
	printf("Sum of All Non Factor Numbers of %d : %d",iValue,iRet);
	
    return 0;
}


// Time Complexity = O(N)