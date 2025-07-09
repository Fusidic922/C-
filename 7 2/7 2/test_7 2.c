#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = get_max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

void exc(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	exc(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}