#include <stdio.h>
void isKthBitSet(int n, int k)
{
	if (n & (1 << (k - 1)))
		printf("SET");
	else
		printf("NOT SET");
}
int main()
{
	int n = 5, k = 1;
	isKthBitSet(n, k);
	return 0;
}



