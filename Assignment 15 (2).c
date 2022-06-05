// Program to display below output

/*
	2	4	6	8	10
	1	3	5	7	9	
	2	4	6	8	10
	1	3	5	7	9	
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iEven=0, iOdd=0;
	          
         for(i = 0; i <iRow;i++)
         {
			 iEven=0;
			 iOdd=-1;
			for(j = 1; j<=iCol; j++)
			{
				if(i%2==0)
				{
					iEven=iEven+2;
					printf("%d\t",iEven);
				}
				else{
					iOdd=iOdd+2;
					printf("%d\t",iOdd);
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