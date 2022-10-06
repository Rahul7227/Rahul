#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],ch;
	int i;
	printf("enter the string :");
	gets(str);
	printf("enter the character :");
	scanf("%c",&ch);
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
			memmove(str+i,str+i+1,strlen(str+i+1)+1);
			i--;
		}
	}
	printf("modified str : %s\n",str);
}
