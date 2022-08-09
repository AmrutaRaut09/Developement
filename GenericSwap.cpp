//
#include<iostream>
using namespace std;
template <class T>

void SwapR(T &p, T &q)
{
	T temp;
	temp = p;
	p = q;
	q = temp;	
}

int main()
{
	int iNo1=11, iNo2 = 21;	
	
	cout<<"Data before changing: "<<iNo1<<"\t"<<iNo2<<endl;
	
	SwapR(iNo1,iNo2);
	
	cout<<"After Swap Data is: "<<iNo1<<"\t"<<iNo2<<endl;
	
	float fNo1=11.0, fNo2 = 21.0;	
	
	cout<<"Data before changing: "<<fNo1<<"\t"<<fNo2<<endl;
	SwapR(fNo1,fNo2);
	
	cout<<"After Swap Data is: "<<fNo1<<"\t"<<fNo2<<endl;
	
	char cValue1='A', cValue2 = 'Z';	
	
	cout<<"Data before changing: "<<cValue1<<"\t"<<cValue2<<endl;
	SwapR(cValue1,cValue2);
	
	cout<<"After Swap Data is: "<<cValue1<<"\t"<<cValue2<<endl;

	return 0;
}