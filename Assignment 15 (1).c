// Program to display below output

/*
	1	2	3	4	5	6
	7	8	9	1	2	3	
	4	5	6	7	8	9
	1	2	3	4	5	6
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iNum=1;
	          
         for(i = 0; i <iRow;i++)
         {
			for(j = 1; j<=iCol; j++)
			{
				if(iNum<=9)
				{
				   printf("%d\t",iNum);
				   iNum++;
				}
				else{
					iNum=1;
					printf("%d\t",iNum);
					iNum++;
				}
				
			}
			printf("\n");
		 } 
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	printf("Enter Number of Rows and Columns   ");
	scanf("%d",&iValue1);
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}