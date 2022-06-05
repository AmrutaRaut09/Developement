// Program to display below output

/*
	A	B	C 	D
	a 	b	c	d
	A	B	C 	D
	a 	b	c	d
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch ='A';
	char ch1='a';
	
         for(i = 0; i <iRow;i++)
         {	
			ch ='A';
			ch1='a';
	
            for(j = 0; j<iCol; j++)
            { 
				if(i%2==0)
				{
  				printf("%c\t",ch);
				ch++;
				}
				else
				{
					printf("%c\t",ch1);
					ch1++;
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