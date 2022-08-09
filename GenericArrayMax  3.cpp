//Program to Display Maximum with generic code in ARRAY (OOP)
#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
	public:
		T *Arr;
		int size;
		
	ArrayX(int value);
	~ArrayX();
	void Accept();
	void Display();
	T Maximum();
};

template<class T>
ArrayX<T>::ArrayX(int value)
{
	size =value;
	Arr = new T[size];
}


template<class T>
ArrayX<T>::~ArrayX()
{
	delete []Arr;
}

template<class T>
ArrayX<T>::Accept()
{
	cout<<"Enter the Values:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
}

template<class T>
ArrayX<T>::Display()
{
		cout<<"Values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<Arr[i]<<endl;
		}
}

template<class T>
T ArrayX<T>:: Maximum()
{
	T Max =Arr[0];
	for(int i=0;i<size;i++)
	{
		if(Arr[i]>Max)
		{
			Max= Arr[i];
		}
	}
	return Max;
};


int main()
{	
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	
	int ret = obj1.Maximum();
	cout<<"Maximum is: "<<ret<<endl;
	
	ArrayX <float>obj2(5);
	obj2.Accept();
	obj2.Display();
	float fRet = obj2.Maximum();
	cout<<"Maximum is: "<<ret<<endl;

	return 0;
}