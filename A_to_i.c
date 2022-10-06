#include<stdio.h>
#include<string.h>
int myatoi(const char *);
int main()
{
	char str[50];
	printf("enter the string :");
	gets(str);
	int res=myatoi(str);
	printf("%d\n",res);
}
int myatoi(const char *r)
{	int res=0,i,v=1;
	if(r[0]=='-')
	v=-1;
	for(i=0;r[i];i++)
	{
		if((r[i]>=48)&&(r[i]<=57))
			res=res*10+r[i]-48;
	}
	return v*res;
}	
