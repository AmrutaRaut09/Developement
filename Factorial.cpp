#include<iostream>
using namespace std;


int Factorial(int iNo)
{
	int iFact=1;
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		iFact=iFact*i;		//  iFact *=i;
	}
	return iFact;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet= Factorial(iValue);
	
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}