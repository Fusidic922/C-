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
			printf("��Ϸ����\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������������\n");
			break;
		}
	} while (input);
	return 0;
}