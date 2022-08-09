//lseek file handling

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>

int main()
{
	char Fname[20];
	int fd = 0;
	char Data[20];
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file..");
		return -1;
	}
	
	lseek(fd,10,0); 	//(kashat, kiti, kuthun)
	read(fd,Data,5);
	write(1,Data,5);
	return 0;	
}

