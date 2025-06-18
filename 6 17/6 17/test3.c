#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int comp(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("%d\n", comp(num1, num2));
//	return 0;
//}
//int fun(int x)
//{
//	if (x > 0)
//		return -1;
//	if (x < 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", fun(a));
//	return 0;
//}

int main()
{
	int arr[10] = {0};
	printf("%zu\n", sizeof(arr));
	printf("%zu\n", sizeof arr[0]);
	printf("%zu\n", sizeof(arr) / sizeof arr[0]);
	return 0;
}