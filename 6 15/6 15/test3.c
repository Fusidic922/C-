#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�ú�ѧϰ������1/0��\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�ù���");
//	}
//	else
//	{
//		printf("�ؼ��ֵ�");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("д����\n");
//		line++;
//		printf("��������%d\n", line);
//	}
//	if (line >= 2000)
//	{
//		printf("�ù���\n");
//	}
//	else
//	{
//		printf("����Ŭ��\n");
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

