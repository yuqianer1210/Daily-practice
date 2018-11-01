#include<stdio.h>
#define EPS 1e-4

int main()
{
	double a, b, c;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	double tmp;
	if (a >= b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	if (a >= c)

	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b >= c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}//排序完成a<=b<=c
	if (a + b > c)
	{
		if (a*a + b * b - c * c <= EPS)
		{
			if (a - b <= EPS)
				printf("是等腰直角三角形");
			else
				printf("是直角三角形");
		}
		else if (c - b <= EPS && b - a <= EPS && c - a <= EPS)
			printf("是等边三角形");
		else if (a - b <= EPS)
			printf("是等腰三角形");
		else
			printf("是一般三角形");
	}
	else
	{
		printf("不能构成三角形");
	}
	return 0;
}