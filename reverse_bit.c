#include<stdio.h>
int main()
{
	short int number,i,j;
	printf("enter the number :");
	scanf("%hd",&number);
	j=0;
	i=sizeof(short int)*8-1;
	for(;i>=0;i--)
	{
		if(number&(1<<i))
		printf("1");
		else
		printf("0");
		if(i%8==0)
		printf(" ");
	}
	printf("\n");
	i=sizeof(short int)*8-1;
	while(j<i)
	{
		if(((number>>i)&1)!=((number>>j)&1))
		{
			number=number^(1<<i);
			number=number^(1<<j);
		}
		i--;
		j++;
	}
	i=sizeof(short int)*8-1;
	for(;i>=0;i--)
	{
		if(number&(1<<i))
		printf("1");
		else
		printf("0");
		if(i%8==0)	
		printf(" ");
	}
	printf("\n");
}
			
		

	
	
