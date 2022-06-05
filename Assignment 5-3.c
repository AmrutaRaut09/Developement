// Display Non Factors of a number.

#include<stdio.h>

void NonFactor(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
    int iCnt=0;
    
    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0 )
        {
            printf("\t%d",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number:  ");
    scanf("%d",&iValue);

    NonFactor(iValue);

    return 0;
}

//// Time Complexity = O(N)