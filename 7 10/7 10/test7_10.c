#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void print(unsigned int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	printf("%u ", i % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	int i = 0;
	if (str[i] != 0)
	{
		i++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = { "abcd" };
	int len = my_strlen(arr);

	return 0;
}

