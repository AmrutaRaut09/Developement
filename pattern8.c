//Program to display below pattern
//Enter row and column:
// row 6 column 5

//1 2  3 4 5
//1 2  3 4 5
//1 2  3 4 5
//1 2  3 4 5
//1 2  3 4 5
//1 2  3 4 5

#include<stdio.h>

void Display(int iCol,int iRow)
{
	int i=0,j=0;
	for(i=1;i<=iCol;i++)
	{
		for(j=1; j<=iRow;j++)
		{
			printf("%d\t",j);
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