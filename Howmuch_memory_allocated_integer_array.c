#include<stdio.h>
void main()
{
	int array,memory_size=0,size;
	printf("enter an array size..\n");
	scanf("%d",&size);
	memory_size=((sizeof(int))*size);
	printf("how much memory we allocated %d\n",memory_size);
}
