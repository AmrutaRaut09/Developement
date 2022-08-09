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
	
	printf("ENter file name to Write: ");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR | O_APPEND); 	//Append the file
	if(fd == -1)
	{
		printf("Unable to Open the file \n");
		return -1;		//Failure
	}
	printf("File is Successfully Opened with FD %d\n",fd);
	printf("Enter the Data that you wnat to write: \n",fd);
	scanf(" %[^'\n']s",Data);
		
	iRet = write(fd,Data,strlen(Data));
	printf("File is Successfully Written with %d bytes \n",iRet);
	
		
	return 0;
}