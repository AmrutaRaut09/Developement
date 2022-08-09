//

#include<iostream>
using namespace std;

void Swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	int iNo1=11, iNo2 = 21;
	
	
	cout<<"Data before changing:"<<iNo1<<"\t"<<iNo2<<endl;
	Swap(&iNo1,&iNo2);
	cout<<"After Swap Data is:"<<iNo1<<"\t"<<iNo2<<endl;
	
	return 0;
}