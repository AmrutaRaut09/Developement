// Program to display below output

/*
	a 	b 	c 	d
	1	2	3	4
	
	a 	b 	c 	d
	1	2	3	4
	
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iNum=1;
	char ch='a';
	          
         for(i = 0; i <iRow;i++)
         {
			for(j = 1; j<=iCol; j++)
			{
				if(i%2==0)
				{
				printf("%c\t",ch);
				ch++;
				}
				else
				{					
				printf("%d\t",iNum);
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