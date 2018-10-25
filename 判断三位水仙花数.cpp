#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e,g;
	int flag = 1, first = 1;
	scanf_s("%d%d", &a, &b);
	for (int f=a; f <= b; f++)
	{
		c = f /100;
		d = f % 100 / 10;
		e = f % 10;
		g = pow(c, 3) + pow(d, 3) + pow(e, 3);
		if (g == f) 
		{
			flag = 0;
			printf("%d\0", g);
			if (first)
				first = 0;
			else
				printf("\0");
		}
		else
			printf("no");
	}
	return 0;
}