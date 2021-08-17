#include <stdio.h>

int main()
{
	int a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	if (a > b && a > c)
	{
		printf("the biggest number = %d", a);
	}
	else if (b > a && b > c)
	{
		printf("the biggest number = %d", b);
	}
	else if (c > a && c > b)
	{
		printf("the biggest number = %d", c);
	}
}