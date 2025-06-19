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

//int main()
//{
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	return 0;
//} 

//struct Stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %s %d %s\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).tele);
//	printf("%s %s %d %s\n", ps->name, ps->sex, ps->age, ps->tele);
//}
//int main()
//{
//	struct Stu s = { "Linr","man",18,"13178259869" };
//	/*printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tele);*/
//	print(&s);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a / b, a % b);
	return 0;
}