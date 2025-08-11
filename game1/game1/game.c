#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****  0.exit   1.play  ****\n");
	printf("***************************\n");
}



void RefreshBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0;i < ROW;i++)
	{
		for (j = 0;j < COL;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0;i < ROW;i++)
	{
		for (j = 0;j < COL;j++)
		{
			printf(" %c ", board[i][j]);
			if (j != COL - 1)
			{
				printf("|");

			}
		}
		printf("\n");

		if (i != ROW - 1)
		{
			for (j = 0;j < COL - 1;j++)
			{
				printf("---|");
			}
			printf("---\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
	{
		if (board[i - 1][j - 1] != ' ')
		{
			printf("已占用\n");
		}
		else
		{
			board[i - 1][j - 1] = '*';
		}
	}
	else
	{
		printf("输入错误\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	do
	{
		srand((unsigned int)time(NULL));
		printf("电脑下棋\n");
		int i = rand() % ROW;
		int j = rand() % COL;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	} while (1);
}

void Judge()
{
	;
}

void game()
{
	char board[ROW][COL] = { 0 };
	RefreshBoard(board, ROW, COL);
	do
	{
		DisplayBoard(board, ROW, COL);
		PlayerMove(board, ROW, COL);
		Judge();
		ComputerMove(board, ROW, COL);
		Judge();
	} while (1);
}