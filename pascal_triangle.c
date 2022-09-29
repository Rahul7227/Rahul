#include<stdio.h>
int main()
{
	int row,i,j,space,coef=1;
	printf("enter the row:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(space=1;space<row-i;space++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				coef=1;
				printf("%d ",coef);
			}
			else
			{
				coef=coef*(i-j+1)/j;
				printf("%d ",coef);
			}
		}
		printf("\n");
	}
}

				

