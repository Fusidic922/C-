#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}

//void Judge(int x)
//{
//	if (0 == x % 2)
//		printf("ż��\n");
//	else
//		printf("����\n");
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

//void Judge(int x)
//{
//	if (x % 2 == 1)
//		printf("%d ", x);
//}
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i++;
//		Judge(i);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("����\n");
		break;
	}

	return 0;
}