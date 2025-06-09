#include<stdio.h>
int main()
{
	float celsius;
	float fahrenheit;
	printf("enter the temperature in fahrenheit: ");
	int x = scanf("%f", &fahrenheit);
	celsius = 5.0 / 9.0 * (fahrenheit - 32);
	printf("%f", celsius);
	return 0;
}