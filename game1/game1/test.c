#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重试\n");
			break;
		}
	} while (input);
	return 0;
}