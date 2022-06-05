// Program to display below output

/*
	*	#	*	#
	*	#	*	#
	*	#	*	#
	*	#	*	#
	*	#	*	#
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
         for(i = 1; i <= iRow;i++)
         {
            for(j = 1; j<=iCol; j++)
            {
				if(j%2==0)
				{
  				  printf("#\t");
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
	int iValue1=0;
	int iValue2=0;
	printf("Enter Number of Rows and Columns");
	scanf("%d",&iValue1);
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}