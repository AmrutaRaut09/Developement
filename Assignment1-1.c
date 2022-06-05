//Program for Division of Number


#include<stdio.h>

	int Divide(int iNo1, int iNo2)
	{
		int iAns=0;
		if(iNo2 > iNo1)
		{
			return -1;
		}
		
		
		iAns=iNo1/iNo2;
		return iAns;		
	}	
	
	int main()
	{
		int iDiv=0;
		int Division();
		int iValue1=0, iValue2=0;		
		printf("\n Enter 2 Numbers:");
		scanf("%d%d", &iValue1, &iValue2);		
		
		iDiv=Divide(iValue1, iValue2);
		printf("Division is %d",iDiv);
		
		return 0;
		
	}