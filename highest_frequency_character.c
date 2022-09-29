#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,cnt=0;
	printf("enter the string :");
	gets(str);
	printf("enter the character :");
	scanf("%c",&ch);
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		cnt++;
	}
	printf("occurance=%c cnt=%d\n",ch,cnt);
}
	
	

