// Display number of spaces in string

#include<iostream>
using namespace std;

int CountSpace(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str ==' ')
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
	
	//scanf("%[^'\n']s",Arr);
	
	cin.getline(Arr,20);
	//all above statements does same work

	iRet=CountSpace(Arr);
	cout<<"Number of Small letters are: "<<iRet<<endl;
	return 0;
}