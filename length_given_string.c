#include<stdio.h>
#include<string.h>
int *mystrlen(char * str);
int main()
{
	char str[100];
	int i,n;
	printf("enter the string ;");
	gets(str);
	n=strlen(str);
	printf("%d",n);
	return 0;
}
int *mystrlen(char * str)
{
	int i,n;
	for(i=0;str[i];i++)
	{
		if(str[i]=='\0')	
		break;
	}
	return n;
}
