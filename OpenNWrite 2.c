#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

  //Read:4
  //write 2
  //Execute: 1
  
  //Permission	 o_owner_group_other
int main()
{
	char fName[20];
	char Data[100];
	int fd = 0,iRet=0;		//File descriptor
	
	printf("ENter file name to Open: ");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR | O_APPEND); 	//Append the file
	if(fd == -1)
	{
		printf("Unable to Open the file \n");
		return -1;		//Failure
	}
	printf("File is Successfully Opened with FD %d\n",fd);
		
	iRet = read(fd,Data,10);
	printf("File is Successfully READ From the file %d bytes \n",iRet);
	printf("Data from File is: \n");
	printf("%s\n",Data);
	write(1,Data,iRet);
	
		
	return 0;
}

//0		STDIN		Keyboard
//1		STDOUT		Monitor
//2		STDERR		Monitor