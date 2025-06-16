#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("好好学习不？（1/0）\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好工作");
//	}
//	else
//	{
//		printf("回家种地");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("写代码\n");
//		line++;
//		printf("代码行数%d\n", line);
//	}
//	if (line >= 2000)
//	{
//		printf("好工作\n");
//	}
//	else
//	{
//		printf("继续努力\n");
//	}
//	return 0;
//}
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1,&num2);
	printf("%d\n", add(num1, num2));
	return 0;
}

