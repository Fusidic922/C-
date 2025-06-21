#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("ÇëÊäÈëÃÜÂë ");
//	scanf("%s", &password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("ÇëÈ·ÈÏ:Y/N ");
//	if (getchar() == 'Y')
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		putchar(a);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ma[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int si = sizeof(ma) / sizeof(ma[0]);
//	while (i < si)
//	{
//		putchar(ma[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char birth[9] = { 0 };
//	scanf("%s", &birth);
//	int i = 0;
	/*while (i < 8)
	{
		if (i < 3)
			printf("%c", birth[i]);
		else if (3 == i)
			printf("%c\n", birth[i]);
		else if (4 == i)
			printf("%c", birth[i]);
		else if (5 == i)
			printf("%c\n", birth[i]);
		else if (6 == i)
			printf("%c", birth[i]);
		else
			printf("%c\n", birth[i]);
		i++;
	}*/

	/*while (i < 8)
	{
		switch (i)
		{
		case 0:
			printf("%c", birth[i]);
			break;
		case 1:
			printf("%c", birth[i]);
			break;
		case 2:
			printf("%c", birth[i]);
			break;
		case 3:
			printf("%c\n", birth[i]);
			break;
		case 4:
			printf("%c", birth[i]);
			break;
		case 5:
			printf("%c\n", birth[i]);
			break;
		case 6:
			printf("%c", birth[i]);
			break;
		case 7:
			printf("%c\n", birth[i]);
			break;
		}
		i++;
	}
	return 0;
}*/

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("%d\n", year);
//	printf("%02d\n", month);
//	printf("%02d\n", date);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float english = 0.0f;
//	scanf("%d;%f,%f,%f", &num, &c, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f\n", num, c, math, english);
//	return 0;
//}

//int main()
//{
//	int n = printf("Hello World!");
//	printf("\n%d\n", n);
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello world!\"<<end!;\n");
//	return 0;
//}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int num[4] = { 0 };
	int i = 1;
	int m = 0;
	scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
	while (i < 4)
	{
		m = max(num[i - 1], num[i]);
		i++;
	}
	printf("%d\n", m);
	return 0;
}