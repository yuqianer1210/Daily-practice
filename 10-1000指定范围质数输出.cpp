#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,m,temp,count = 1;
	do
	{
		printf("�����������涨��Χ�ڵ���������\n");
		scanf_s("%d%d", &a,&b);
	} while (a<10||a>b||b>1000);
	for (;a<=b;a++)
	{
		m = sqrt(a);
		if (a%m)
			continue;
		else
		{
			printf("%d ", a);
			if (count % 5 == 0)
				printf("\n");
			count++;
		}
	}
	return 0;
}