#include<stdio.h>
int main()
{
	int arr[100],i,j,size,temp;
	printf("enter the no of element :");
	scanf("%d",&size);
	printf("enter the element :");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d  ",arr[i]);
}  
