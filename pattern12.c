//Program to display below pattern

#include<stdio.h>

void Display(int iCol,int iRow)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1; j<=iCol;j++)
		{
			if(i<j)
			{
				printf("\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else
			{
					printf("$\t");
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