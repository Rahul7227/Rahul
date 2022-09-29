#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],i,j,*p,ch;
	printf("enter the string s1 :");
	gets(s1);
	printf("enter the string s2 :");
	gets(s2);
	while(p=strstr(s1,s2))
	{
		j=strlen(s2)-1;
		for(i=0;i<j;i++,j--)
		{
			ch=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=ch;
		}
	}
	puts(s1);
}
