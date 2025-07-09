#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int run(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int year = 0;
//	int j = 0;
//	for (j = 1000;j <= 2000;j++)
//	{
//		if (run(j))
//		{
//			count++;
//			printf("%d ", j);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int cut(int x,int y[],int sz)
//{
//	int left = 0;
//	int right = sz;
//	int average = 0;
//	printf("%d\n", right);
//	while (left <= right)
//	{
//		average = (left + right) / 2;
//		if (y[average] > x)
//		{
//			right = average - 1;
//		}
//		else if (y[average] < x)
//		{
//			left = average + 1;
//		}
//		else
//		{
//			return average;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int input = 0;
//	int size = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &input);
//	printf("%d\n", cut(input, arr, size));
//	return 0;
//  }

void dick(int* pnum)
{
	(*pnum)++;
}
int main()
{
	int num = 0;
	int i = 0;
	for(i=0;i<100;i++)
		dick(&num);
	printf("%d\n", num);
	return 0;
}
