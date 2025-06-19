#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	typedef unsigned int uint;
//	uint a = 0;
//	int b = 0;
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d",a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n", add(a, b));
//	return 0;
//}

//#define add(x,y) x+y
//
//int main()
//{
//	int a = 83;
//	int b = 2938498;
//	printf("%d\n", add(a, b));
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	printf("%p\n", &a);
//	return 0;
//}

int main()
{
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(char*));
	return 0;
}