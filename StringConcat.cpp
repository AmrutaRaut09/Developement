//Concat the String into Another string

#include<iostream>
using namespace std;

void StrCatX(char *src, char *dest)
{
	while(*src !='\0')
	{
		src++;
	}
	
	while(*dest !='\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*src='\0';
}
int main()
{
	char Arr[20];
	char Brr[20];

	cout<<"Enter 1st String:";
	cin.getline(Arr,20);
	cout<<"Enter 2nd String:";
	cin.getline(Brr,20);
	

	StrCatX(Arr,Brr);
	
	cout<<"Concatenated String is: "<<Arr<<endl;
	
	return 0;
}