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
	}//�������a<=b<=c
	if (a + b > c)
	{
		if (a*a + b * b - c * c <= EPS)
		{
			if (a - b <= EPS)
				printf("�ǵ���ֱ��������");
			else
				printf("��ֱ��������");
		}
		else if (c - b <= EPS && b - a <= EPS && c - a <= EPS)
			printf("�ǵȱ�������");
		else if (a - b <= EPS)
			printf("�ǵ���������");
		else
			printf("��һ��������");
	}
	else
	{
		printf("���ܹ���������");
	}
	return 0;
}