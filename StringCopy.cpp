//Copy the String into Another string

#include<iostream>
using namespace std;

void StrCpyX(char *src, char *dest)
{
	while(*src !='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];

	cout<<"Enter String:";
	cin.getline(Arr,20);
	//all above statements does same work

	StrCpyX(Arr,Brr);
	
	cout<<"Copied string is: "<<Brr<<endl;
	
	return 0;
}