#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int count = 0;
//
//int my_strlen(char* x)
//{
//	if (x[count] != 0)
//	{
//		count++;
//		my_strlen(x);
//	}
//	else
//	{
//		return count;
//	}
//}

//int count = 0;
//
//int my_strlen(char*x)
//{
//	if (*x != '\0')
//	{
//		count++;
//		x++;
//		my_strlen(x);
//	}
//	else
//	{
//		return count;
//	}
//}

//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}

//int my_strlen(char* x)
//{
//	if (*x == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(x + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = { "abcde" };
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int jie(int x)
//{
//	if (x > 1)
//	{
//		return x * jie(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", jie(n));
//	return 0;
//}

//int fei(unsigned int x)
//{
//	if (x > 1)
//	{
//		return fei(x - 1) + fei(x - 2);
//	}
//	else if (1 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int fei(unsigned int x)
//{
//	if (x > 2)
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		int i = 0;
//		for (i = 0;i < x - 2;i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	printf("%u\n", fei(n));
//	return 0;
//}

//int han(unsigned int x)
//{
//	if (x > 1)
//	{
//		return 1 + 2 * han(x - 1);
//	}
//	else if (1 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	printf("%u\n", han(n));
//	return 0;
//}

int qin(unsigned int x)
{
	if (x > 2)
	{
		return qin(x - 1) + qin(x - 2);
	}
	else if (2 == x)
	{
		return 2;
	}
	else if (1 == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	printf("%u\n", qin(n));
	return 0;
}