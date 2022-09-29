#include<stdio.h>
int main()
{	
	int number,position,bit;
	printf("enter the number :");
	scanf("%d",&number);
	printf("enter the position :");
	scanf("%d",&position);
	number=number^(1<<position);
	for(bit=31;bit>=0;bit--)
	{
		if(number&(1<<bit))
		printf("1");
		else
		printf("0");
		if(bit%8==0)
		printf(" ");
	}
	printf("\n%d",number);
}
	
	
