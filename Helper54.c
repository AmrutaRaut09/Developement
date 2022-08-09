#include "Header54.h"

ULONG Power(int iNo1, int iNo2)
{
	ULONG iMult=1;
	int iCnt=1;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}