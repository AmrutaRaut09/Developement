//Display Number of Small letters.

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
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

	iRet=CountSmall(Arr);
	cout<<"Number of Small letters are: "<<iRet<<endl;
	return 0;
}