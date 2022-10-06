#include<stdio.h>
int main()
{
	 int i,j,n,cnt=0;
	 int a[50];
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	 {
	 	cnt=0;
	 	for(j=0;j<n;j++)
	 	{
	 		if(a[i]==a[j])
	 		{
	 			cnt++;
	 		}
	 	}

	 if(cnt==1)
	 printf(" %d",a[i]);
	 }
	 if(cnt==n)
	 printf("non repeted elemant :");
}	
	 	


