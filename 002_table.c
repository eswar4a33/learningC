#include<stdio.h>
int main()
{
int n, i;
	printf("enter a value:");
	int x = scanf("%d", &n);
	for (i = 1; i <= 20; i++)
	{
		printf("%2d * %d = %3d\n", i,n,i*n);
	}
}