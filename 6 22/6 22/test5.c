#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//i/*nt main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}*/

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		if (5 == i)
//			continue;
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//			printf("6 ");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//			printf("6 ");
//	}
//	return 0;
//}
//


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 1;
//	for (;n > 0;n--)
//		m *= n;
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	int d = 1;
//
//	for (n = 1;n <= 10;n++)
//	{
//		for (m = n,d = 1;m > 0;m--)
//		{
//			d *= m;
//			if (1 == m)
//				sum += d;
//		}
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int d = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		d *= n;
//		sum += d;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	for (i=0;i<10;i++)
//	{
//		if (n == arr[i])
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

int main()
{
	int in = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int si = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &in);
	int left = 0;
	int right = si - 1;
	int ave = 0;
	/*for (;;)
	{
		ave = (left + right) / 2;
		if (arr[ave] == in)
		{
			printf("下标为：%d\n", ave);
			break;
		}
		else if (arr[ave] > in && in >= arr[0])
		{
			right = --ave;
		}
		else if(arr[ave] < in && in <= arr[si-1])
		{
			left = ++ave;
		}
		else
		{
			printf("找不到\n");
			break;
		}
	}*/
	while (left <= right)
	{
		ave = (left + right) / 2;
		
		if (arr[ave] > in)
		{
			right = ave - 1;
		}
		else if (arr[ave] < in)
		{
			left = ave + 1;
		}
		else
		{
			printf("下标为：%d\n", ave);
			break;
		}
	}
	if(left>right)
		printf("找不到\n");
	return 0;
}