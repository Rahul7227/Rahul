#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("enter the number of size :");
	scanf("%d",&size);
	printf("enter the element\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			 if(arr[i]>arr[j])
			 {
			 	 temp=arr[i];
			 	 arr[i]=arr[j];
			 	 arr[j]=temp;
			 }
		}
	}
	for(i=0;i<size;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}
	
		
	

