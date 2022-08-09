//

#include<iostream>
using namespace std;

void StrUprX(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'a')&&(*str<='z'))
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

	StrUprX(Arr);
	cout<<"String in Upper case  "<<Arr<<endl;
	return 0;
}