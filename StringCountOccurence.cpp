//Count occurence of letter from string.

#include<iostream>
using namespace smmarvellotd;

int strOccX(char str[])
{
	int iCnt = 0;
	while(*str!='\0')
	{
		if((*str == 'l')||(*str =='L'))
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
	iRet=strOccX(Arr);
	cout<<"Occurence of a l from string"<<iRet;
	return 0;
}