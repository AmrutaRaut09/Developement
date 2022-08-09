//Compare the String with Another string.

#include<iostream>
using namespace std;
typedef int BOOL;

bool StrCmpX(char *src, char *dest)
{
	while((*src != '\0')&&(*dest!='\0'))
	{
		if(*src != *dest)
		{
			if((*src+32)==(*dest-32))
			{
				return true;
			}
			else
			{
				break;
			}
		}
		src++;
		dest++;
	}
	if((*src == '\0')&&(*dest=='\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];
	char Brr[20];
	bool bRet;
	cout<<"Enter 1st String:";
	cin.getline(Arr,20);
	cout<<"Enter 2nd String:";
	cin.getline(Brr,20);
	
	bRet = StrCmpX(Arr,Brr);
	
	if (bRet == true)
	{
		cout<<"Strings are equal"<<endl;
	}
	else
	{
		cout<<"Strings are not equal"<<endl;
	}
	
	return 0;
}