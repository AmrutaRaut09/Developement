// Display Factors of a number in Decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
    
    for(iCnt=(iNo/2); iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0 )
        {
            printf("\t%d",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number:  ");
    scanf("%d",&iValue);

   FactRev(iValue);

    return 0;
}