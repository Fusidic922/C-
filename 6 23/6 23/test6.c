#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (mid > num)
//		{
//			right = mid - 1;
//		}
//		else if (mid < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("下标为：%d\n", mid-1);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char notice[] = { "Welcome to hell!!!" };
//	int sz = sizeof(notice) / sizeof(notice[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz / 2 + 1;i++)
//	{
//		char notice[] = { "Welcome to hell!!!" };
//		for (j = i;j < sz / 2;j++)f
//		{
//			notice[j] = '*';
//			notice[sz - j - 2] = '*';
//		}
//		printf("%s\n", notice);
//	}
//	return 0;
//}

int main()
{
	char notice[] = { "Welcome to hell!!!" };
	char arr[] = { "##################" };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%s\n", arr);
	for (i = 0;i < sz / 2;i++)
	{
		arr[i] = notice[i];
		arr[sz - i - 2] = notice[sz - i - 2];
		printf("%s\n", arr);
	}
	return 0;
}