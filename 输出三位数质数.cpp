#include <stdio.h>
#include<math.h>
int  main()
{
	int t,k,i,m=100,n=999,p=0;
	for (i = m; i <= n; i++)
	{
		k = sqrt(i);
		for (t = 2; t <= k; t++)
		{
			if (i%t == 0)
			{
				break;
			}
		}
		if (t > k)
		{
			p++;
			if (p % 5 == 0)
				printf("%6d\n", i);
			else
				printf("%6d", i);
		}
	}
	return 0;
}