// pattern printing
// Loop under loop


#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=0;i<=iRow;i++)
	{
		for(j=1; j<=iCol;j++)
	    {
	      printf("*\t");
	    }
	      printf("\n");	
	}
}

int main()
{
	int iValue1 =0,iValue2=0;
	printf("Please enter the Rows value: ");
	scanf("%d",&iValue1);
	
	printf("Please enter the Column value: ");
	scanf("%d",&iValue2);
	Display(iValue1, iValue2);
	return 0;	
}