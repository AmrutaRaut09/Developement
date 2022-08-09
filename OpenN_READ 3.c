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
	char Data[10];		//file data anayla
	int fd = 0,iRet=0;		//File descriptor
	
	printf("ENter file name to Open: ");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to Open the file \n");
		return -1;		//Failure
	}
	printf("File is Successfully Opened with FD %d\n",fd);
	while((iRet = read(fd,Data,sizeof(Data)))!=0)	//One of the best whileLoop
	{
		write(1,Data,iRet);
	}
	return 0;
}