// Program which Displays Difference between all its Factors and Non factors sum

#include<stdio.h>

int Factor(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0 )
        {
           iSum=iSum+iCnt;
        }
    }
	printf("\n%d",iSum);
	return iSum;	
}

int NonFactors(int iNo)
{
    int iCnt=0;
	int iSum=0;
    
    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0 )
        {
           iSum=iSum+iCnt;
        }
    }
	printf("\t%d",iSum);
	return iSum;
}
int FactDiff(int iNo)
{
	int iFactor=0;
	int iDiff=0;
	int iNonFactor=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iFactor=Factor(iNo);
	iNonFactor=NonFactors(iNo);
	
	iDiff=iFactor-iNonFactor;
	
	return iDiff;
}



int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number: ");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("\t=%d ",iRet);
	
	return 0;
}

// Time Complexity = O(N)+O(N/2)