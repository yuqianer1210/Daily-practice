#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,m,n,i,count = 1;
	do
	{
		printf("请输入两个规定范围内的正整数！\n");
		scanf_s("%d%d", &a,&b);
	} while (a<10||a>b||b>1000);
	for (i = a; i <= b; i++)
	{
		m = sqrt(i);
		for (n = 2; n <= m; n++)
		{
			if (i%n == 0)
				break;
		}
		if (n > m)
		{
			printf("%d ", i);
			if (count % 5 == 0)
				printf("\n");
			count++;
		}
	}
	return 0;
}
