#include<stdio.h>
union tag
{
	int i;
	char c;
}
var={1};
int main()
{
	if(var.c==1)
	printf("CPU is little\n");
	else
	printf(" ");
}
