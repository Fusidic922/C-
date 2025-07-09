#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void j(int x)
{
	int b = 0;
	int i = 0;
	for (i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
		{
			b++;
		}
		else
		{
			;
		}
	}
	if (b == 0)
	{
		printf("%d\n",x);
	}
	else
	{
		;
	}
}
int main()
{
	int c = 0;
	int l = 0;
	for (l = 101;l <= 200;l+=2)
	{
		j(l);
	}
	return 0;
}