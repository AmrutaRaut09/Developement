//Display Number of Capital letters.

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	cout<<"Enter String:";
	//cin>>Arr;
	//scanf("%[^'\n']s",Arr);
	
	cin.getline(Arr,20);
	//all above statements does same work

	iRet=CountCapital(Arr);
	cout<<"Number of capital letters are: "<<iRet<<endl;
	return 0;
}