//Program to check files are same or not.


while(1)
{
	iRet1 = read(Fdsrc,Buffer1,FILESIZE);
	iRet2 = read(Fdsrc,Buffer2,FILESIZE);
	
	if((iRet1 ==0)||(iRet2 == 0))
	{
		
	}
}


int main()
{
	char Fname1[20];
	char Fname2[20];
	bool bRet = false;
	
	printf("ENter file name which contains the data \n");
	scanf("%s",Fname);
	bRet = FileCompare(Fname1,Fname2);
	if(bRet == true)
	{
		printf("Files are same \n");
	}
	else{
		printf("Files are different \n");
	}
	return 0;
}