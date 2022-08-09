//Program to Display Maximum with generic code
#include<iostream>
using namespace std;

template <class T>
T Max(T Arr[],int size)
{
	int i=0;
	T Max = Arr[0];
	for(i=0;i<size;i++)
	{
		if(Arr[i]>Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}
int main()
{
	int Brr[] = {10,20,30,40,50};
	int Ret = Max(Brr,5);
	cout<<"Maximum is: "<<Ret<<endl;
	float Crr[] = {80.6,20.5,30.3,40.11,60.12};
	float fRet = Max(Crr,5);
	cout<<"Maximum is: "<<fRet<<endl;
	return 0;
}