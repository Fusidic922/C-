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

//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char notice[] = { "Welcome to hell!!!" };
//	char arr[] = { "##################" };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%s\n", arr);
//	for (i = 0;i < sz / 2;i++)
//	{
//		arr[i] = notice[i];
//		arr[sz - i - 2] = notice[sz - i - 2];
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//#include<string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = { "Welcome to hell!!!" };
//	char arr2[] = { "##################" };
//	int sz = strlen(arr2)-1;
//	int left = 0;
//	int right = sz;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

int main()
{
	int j = 0;
	char password[] = {"123456"};
	int sz = strlen(password) - 1;
	char input[11] = { '0' };
	int i = 0;
	int k = 0;
	for (j = 0;j < 3;j++)
	{
		for (k = 0;k < 6;k++)
		{
			scanf("%c", &input[k]);
		}
		for (i = 0;i < sz + 1;i++)
		{
			if (i == sz)
			{
				printf("密码正确\n");
				break;
			}
			else if (password[i] == input[i] && i != sz)
				continue;
			else
			{
				printf("密码错误\n");
				printf("还有%d次机会\n", 3 - j - 1);
				break;
			}

		}
		if (i == sz)
			break;
	}
	return 0;
}
