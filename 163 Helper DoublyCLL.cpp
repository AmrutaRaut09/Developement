#include<iostream>
using namespace std;

class Number
{
	private:
			int iNo;	//Characteristics
			
	public:
			void Accept()		//Setter
			{
				cout<<"Ente Value"<<endl;
				cin>>this->iNo;
			}
			void Display()		//Getter
			{
				cout<<"Value is:"<<this->iNo<<endl;
			}
			int Factorial()
			{
				int iFact=1;
				int iCnt=0;
				for(iCnt=1;iCnt<=iNo;iCnt++)
				{
					iFact=iFact*iCnt;		//  iFact *=iCnt;
				}
				return iFact;	
			}
};

int main()
{
	int iRet = 0;
	
	Number nobj;
	
	nobj.Accept();
	nobj.Display();
	//cout<<nobj.iNo;		iNO is private not accessible here
	iRet=nobj.Factorial();
	
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}
