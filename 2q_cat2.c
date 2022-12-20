#include<fcntl.h> //header file for file operations
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(int argc,char*argv[])
{
         if(argc!=2)
        { //checks if two arguments are present
                 printf("\nThe syntax should as be follows");
                 exit(1);
        }
        int fd,count;
        char buffer[1]; //characer buffer to store the bytes
        fd=open(argv[1], O_RDONLY);
        if(fd==-1)
        {
                printf("cannot open file");
                exit(1);
        }
        while((count=read(fd,buffer,sizeof(buffer)))>0) //displaying the content
        {
                printf("%s",buffer);
        }
        exit(0);
}

