
#include<stdio.h>

void Display(int iCol,int iRow)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("\nInvalid Input");
		return;
	}
	for(i=1;i<=iCol;i++)
	{
		for(j=1; j<=iRow;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else
			{
				printf("%d\t",j);
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