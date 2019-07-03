#include <stdio.h>
int main()
{
	int n, im, a, b, dap, hap, cnt = 0;
	scanf("%d", &n);
	im = n;
	while (1)
	{
		b = n % 10;
		a = (n / 10) % 10;
		hap = a + b;
		dap = b * 10 + hap % 10;
		n = dap;
		cnt++;
		if (im == n)
		{
			printf("%d\n", cnt);
			return 0;
		}
	}
	return 0;
}
