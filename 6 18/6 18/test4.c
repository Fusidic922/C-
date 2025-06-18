#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a++;
//	printf("%d\n",a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = --a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a += 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int b = 7;
//	if (a && b)
//		printf("都真\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 7;
//	if (a || b)
//		printf("有真\n");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n", (a > b ? a : b));
//	return 0;
//}

int main()
{
	int a = 8;
	int b = 93;
	int c = (a = b + 8, b = a + b, a = 9 - b);
	printf("%d\n", c);
	return 0;
}