#include<stdio.h>
#include<math.h>

int main()
{
	int i,m,n,temp,prime=1;
	do
	{ 
		scanf_s("%d", &n);
	} while (n <= 0);
	m = sqrt(n);
	for (i = 2; i <= m; i++)
	{
		if (n%i)
			continue;
		else
		{
			prime = 0;
			break;
		}
	}
	if (prime)
		printf("%d������", n);
	else
		printf("%d��������", n);
	return 0;
}