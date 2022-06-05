// Program to display below output
/*
	1	2	3	4	5	
	2	3	4	5	6
	3	4	5	6	7
	4	5	6	7	8
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=1;
	int no=1;
	
    for(i = 1; i<=iRow;i++)
    {
	no=i;
      for(j=1; j<=iCol; j++)
       {
         printf("%d\t",no);
			no++;
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