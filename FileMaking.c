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
	int fd = 0;		//File descriptor
	
	printf("ENter file name to create: ");
	scanf("%s",fName);
	printf("Enter the data that you want to write\n");
	
	scanf(" %[^'\n']s",Data);
	
	fd = creat(fName,0777);
	if(fd == -1)
	{
		printf("Unable to create the file \n");
		return -1;		//Failure
	}
		printf("File is successfully created with fd %d",fd);
		write(fd,Data,strlen(Data));
		printf("File is successfully written with bytes %d",)
	return 0;
}