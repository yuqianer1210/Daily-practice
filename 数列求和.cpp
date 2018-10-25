#include<stdio.h>
#include<math.h>
double jiecheng(double n)
{
	double i,temp,jiecheng=1;
	for (i = n;i>=1;i--)
	{
		jiecheng *= i;
	}
	return jiecheng;
}

int main()
{
	double x, t,p, m,temp, s=0;
	scanf_s("%lf", &x);
	for (m = 1;; m++)
	{
		t = pow(-1, m - 1);
		p = jiecheng(m);
		temp = pow(x, m) / p;
		s += t * temp;
		if (temp < 0.0004)
			break;
	}
	printf("%.2f\n", s);
}