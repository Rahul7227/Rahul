#include<stdio.h>
int main()
{
	int n1,n2,num1,num2,temp,gcd,lcm;
	printf("enter the num :");
	scanf("%d %d",&n1,&n2);
	num1=n1;
	num2=n2;
	while(num2!=0)
	{
		temp=num2;
		num2=num1%num2;
		num1=temp;
	}
	gcd=num1;
	lcm=(n1*n2)/gcd;
	printf("gcd=%d\n lcm=%d\n",gcd,lcm);
}
