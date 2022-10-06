#include<stdio.h>
int main()
{
	int number,bitposition;
	printf("enter the number :");
	scanf("%d",&number);
	printf("enter the bit position :");
	scanf("%d",&bitposition);
	if((number>>bitposition)&1)
		printf("bit position is set\n");
	else
		printf("bit position is clear\n");
}
