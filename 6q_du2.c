#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char **argv)
{
	int fd,i,size=0;
	for(i=1;i<argc;i++)
	{
		size=0;
		fd=open(argv[i],O_RDONLY);
		if(fd<0)
		{
			perror("ERROR: ");
			return -1;
		}
		size=lseek(fd,0,SEEK_END);
		lseek(fd,0,SEEK_SET);
		//write(1,&size,1);
		printf("%d",size);
		printf("    ");
		printf("%s\n",argv[i]);
	//	write(1,argv[i],strlen(argv[i]));
	//	lseek(fd,0,SEEK_SET);
	//	write(1,"\n",1);
	}
}

