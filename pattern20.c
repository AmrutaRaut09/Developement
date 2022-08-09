/*
	*	*	*	*	$
	*	*	*	$	*
	*	*	$	*	*
	*	$	*	*	*
	$	*	*	*	*
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch = '\0';
	
	if(iRow!=iCol)
	{
		printf("\n Invalid Input");
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol; j>=1;j--)
		{
			if(i==j)
			{	
				printf("$\t",ch);
			}
			else
			{
				printf("*\t");
			}
		}	
		printf("\n");
	}		
	
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("\nEnter row value:");
	scanf("%d",&iValue1);
	
	printf("\nEnter col value:");
	scanf("%d",&iValue2);
	Display(iValue1,iValue2);
	
	return 0;
}
//Time Complexity= O(N/2)