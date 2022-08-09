//String Toggle case

#include<iostream>
using namespace std;

void StrToggleX(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str<='Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a')&&(*str<='z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	int iRet=0;
	cout<<"Enter String:";
	
	//scanf("%[^'\n']s",Arr);
	
	cin.getline(Arr,20);
	//all above statements does same work

	StrToggleX(Arr);
	cout<<"String in Toggle case: "<<Arr<<endl;
	
	return 0;
}