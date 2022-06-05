// Program to display below output

/*
	5	4	3	2	1
	5	4	3	2	1
	5	4	3	2	1
	5	4	3	2	1
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
         for(i = 1; i <= iRow;i++)
         {
            for(j = iCol; j>=1; j--)
            {
                  printf("%d\t",j);
            }
            printf("\n");
        }
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	printf("Enter Number of Rows and Columns");
	scanf("%d",&iValue1);
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}