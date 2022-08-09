#include<iostream>
using namespace std;

class ArrayX
{
	private:
			int *Arr;
			int iSize;
	public: 
			ArrayX(int iValue)		//Parameterized Constructor
			{
				this->iSize = iValue;
				Arr = new int[iSize];	//Resource Allocation
			}
			
			~ArrayX()		//Destructor
			{
				delete[]Arr;	//Deallocate the resources
			}
			void Accept()
			{
				int iCnt=0;
				cout<<"Enter The Elements:"<<endl;
				
				for(iCnt=0;iCnt<iSize;iCnt++)
				{
					cin>>Arr[iCnt];
				}
			}
			void Display()
			{
				int iCnt=0;
				for(iCnt=0;iCnt<iSize;iCnt++)
				{
					cout<<Arr[iCnt]<<"\t"<<endl;
				}
			}
			
			int Sumation()
			{
				int iCnt=0;
				int iSum=0;
				for(iCnt=0;iCnt<iSize;iCnt++)
				{
					iSum = iSum + Arr[iCnt];
				}		
				return iSum;
			}
};

int main()
{
	auto int iRet =0 ;
	ArrayX obj(5);
	obj.Accept();
	obj.Display();	//Display(&obj)
	
	iRet = obj.Sumation();
	cout<<"Sumation is "<<iRet<<endl;
	return 0;
}