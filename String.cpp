//String Display and Calculate its length.

#include<iostream>
using namespace std;

void Display(char *str)
{
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}
}
int strlenX(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		iCnt++;
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
	Display(Arr);
	iRet=strlenX(Arr);
	cout<<"Length of string is:"<<iRet;
	return 0;
}