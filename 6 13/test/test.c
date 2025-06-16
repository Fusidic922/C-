#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("newbee\n");
//	return 0;
//}

//int main()
//{
//	printf("%zu\n",sizeof(int));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(char));
//	return 0;
//}

//int main()
//{
//	int age = 24;
//	float price = 5.1;
//	char name = "Ghanian";
//
//	return 0;
//}

//int a = 100;
//int main()
//{
//	/*int a = 10;*/
//	printf("a=%d\n",a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1,&num2);
//	int sum = num1 + num2;
//		printf("%d\n",sum);
//
//	return 0;
//}
extern int a;
void test()
{
	printf("test-->%d\n",a);
}
int main()
{
	test();
	{
		printf("a=%d\n",a);
	}
	printf("a=%d\n",a);
	return 0;
}