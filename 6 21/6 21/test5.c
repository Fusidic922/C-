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

int main()
{
	int a = 0;
	while ((a = getchar()) != EOF)
	{
		putchar(a);
	}
	return 0;
}