//

#include<iostream>
using namespace std;

void StrLwrX(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str<='Z'))
		{
			*str = *str + 32;
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

	StrLwrX(Arr);
	cout<<"String in Lower case: "<<Arr<<endl;
	return 0;
}