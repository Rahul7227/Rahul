#include<stdio.h>
int main()
{
	int arr[100],size,temp,i,j;
	printf("enter the number of size ;");
	scanf("%d",&size);
	printf("enter the element\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n");
	for(i=0;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		while((j>=0)&&(temp<arr[j]))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("After sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
		
	
