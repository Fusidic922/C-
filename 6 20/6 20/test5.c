#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}

//void Judge(int x)
//{
//	if (0 == x % 2)
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Judge(a);
//	return 0;
//}

//int judge(int x)
//{
//	if (0 == x % 2)
//		return 0;
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = judge(a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int b = 2;
//	int a = 0;
//	if (1 == a)
//		if (2 == b)
//			printf("6\n");
//	else
//		printf("9\n");
//	return 0;
//}

void Judge(int x)
{
	if (x % 2 == 1)
		printf("%d ", x);
}
int main()
{
	int i = 0;
	while (i < 100)
	{
		i++;
		Judge(i);
	}
	return 0;
}