#include <stdio.h>
int main()
{
	int n, i, a[10000], cnt = 0;
	scanf("%d", &n);
	i = 2;
	while (1)
	{
		if (n%i == 0)
		{
			a[cnt++] = i;
			n = n / i;
		}
		else
			i++;
		if ((n / i) == 0)
			break;
	}
	for (i = 0; i < cnt; i++)
		printf("%d\n", a[i]);
	return 0;
}
