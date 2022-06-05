// Program to display below output

/*
	 1	 2	 3	 4	 5
	-1	-2	-3	-4	-5
	 1	 2	 3	 4	 5
	-1	-2	-3	-4	-5
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iNum= -iCol,iNum2=1;
	printf("iNum=%d\n",iNum);
         for(i = 0; i <iRow;i++)
         {
			 iNum2=1;
			for(j = 1; j<=iCol; j++)
			{
				if(i%2==0)
				{
				  printf("%d\t",iNum2);
				  iNum2++;
				}
				else
				{
				  printf("%d\t",-iNum);
				  iNum++;
				}
			}
			ch='a';
			iNum=1;
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