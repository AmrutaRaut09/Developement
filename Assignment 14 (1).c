// Program to display below output

/*
	A	B	C 	D
	A	B	C 	D
	A	B	C 	D
	A	B	C 	D
	
	
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch ='A';
	
         for(i = 1; i <= iRow;i++)
         {
			 ch = 'A';
            for(j = 1; j<=iCol; j++)
            {
  				  printf("\t%c",ch);
				  ch++;
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