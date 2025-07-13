#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void order(int x[])
//{
//	int a = *x;
//	if (*x < *(x + 1))
//	{
//		*x = *(x + 1);
//		if (*x < *(x + 2))
//		{
//			*x = *(x + 2);
//			*(x + 2) = a;
//		}
//		else
//		{
//			if (a < *(x + 2))
//			{
//				*(x + 1) = *(x + 2);
//				*(x + 2) = a;
//			}
//			else
//			{
//				*(x + 1) = a;
//			}
//		}
//	}
//	else
//	{
//		if (*x < *(x + 2))
//		{
//			*x = *(x + 2);
//			*(x + 2) = *(x + 1);
//			*(x + 1) = a;
//		}
//		else
//		{
//			if (*(x + 1) < *(x + 2))
//			{
//				a = *(x + 1);
//				*(x + 1) = *(x + 2);
//				*(x + 2) = a;
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 0,0,0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	order(arr);
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//	return 0;
//}

//void max(int* y)
//{
//	int i = 0;
//	for (i = 1;(y + i) <= (y + 2); i++)
//	{
//		if (*y < *(y + i))
//		{
//			int a = 0;
//			a = *y;
//			*y = *(y + i);
//			*(y + i) = a;
//		}
//	}
//}
//
//void order(int* x)
//{
//	int j = 0;
//	for (j = 0;j < 3;j++)
//	{
//		max(x + j);
//	}
//}
//
//int main()
//{
//	int arr[3] = {0};
//	scanf("%d %d %d", arr, arr + 1, arr + 2);
//	order(arr);
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	for (n = 3;n <= 99;n += 3)
//		printf("%d ", n);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	if (a > b)
//		i = b;
//	else
//		i = a;
//	for (;i >= 2;i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		m = a;
//		a = b;
//		b = m;
//	}
//	while (b != 0)
//	{
//		m = a % b;
//		a = b;
//		b = m;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	int i = 0;
	double sum = 0;
	int j = 1;
	for (i = 1;i <= 100;i++)
	{
		sum += (1.0 / i) * j;
		j = -j;
	}
	printf("%lf\n", sum);
	return 0;
}