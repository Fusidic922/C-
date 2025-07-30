#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,30,7,7,9,3 };
//	int i = 0;
//	int j = arr[0];
//	//²»ÄÜ¸³0£¡
//	for (i = 1;i < 10;i++)
//	{
//		j = (j <= arr[i] ? arr[i] : j);
//	}
//	printf("%d", j);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= 9;j++)
//		{
//			printf("%d * %d = %d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
