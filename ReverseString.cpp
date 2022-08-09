//Reverse of a String

#include<iostream>
using namespace std;

void StrRevX(char *str)
{
	char *start= str;
	
	char *end= str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start<=end)
	{
		char temp='\0';
		
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	
}

int main()
{
	char Arr[20];

	cout<<"Enter String:";
	
	//scanf("%[^'\n']s",Arr);
	cin.getline(Arr,20);

	StrRevX(Arr);
	
	cout<<"String in Reverse case: "<<Arr<<endl;
	
	return 0;
}