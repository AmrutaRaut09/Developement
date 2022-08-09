
/*//Program to print given Pattern 
input  Row=4
Col = 4

	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*

*/
#include<iostream>
using namespace std;
class pattern
{
	private:
	
		int iRow,iCol;
	public:
		pattern(int a,int b)
		{
			this->iRow= a;
			this->iCol = b;
		}
		
	    void DisplayPattern()
		{
			int i=0;
			int j=0;
			for(i=1;i<=iRow;i++)
			{
				for(j=1;j<=iCol;j++)
				{
					cout<<"*"<<"\t";
				}
				cout<<endl;
			}
		}
};

int main()
{
	pattern pobj(4,4);
	pobj.DisplayPattern();

	return 0;
}






