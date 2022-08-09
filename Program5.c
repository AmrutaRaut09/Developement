#include<stdio.h>

void JewellersPortsl(int iWeight)
{
	
	switch(iWeight)
	{
		case 1:
			printf("Your Bill is 4000\n");
			break;
		case 2:
			printf("Your Bill is 8000\n");
			
		case 5:
			printf("Your Bill is 20000\n");
			break;
		case 10:
			printf("Your Bill is 40000\n");
			break;
			
		default:
			printf("Invalid weight\n");
	}
	
}

int main()
{
	
	int iValue=0;
	
	printf("\nEnter Gold coin size that you want to purchase:");
	scanf("%d",&iValue);
	
	JewellersPortsl(iValue);
	
	return 0;
}