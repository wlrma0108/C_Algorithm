#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define m 12
#define p 12
#define Max_dir 8
#define Timestep 1000
CONSOLE_SCREEN_BUFFER_INFO presentCur;

typedef struct A0ff {

	short int vert;
	short int horiz;

}offset;

typedef struct St_element {

	short int row;
	short int col;
	short int dir;

}ty_element;

typedef struct ListNode* listPointer;
typedef struct ListNode {
	ty_element data;
	listPointer link;
}listNode;

void gotoxy(int x, int y);
offset move[Max_dir] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };
int maze[m + 2][p + 2] = {
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1 ,0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
{1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1},
{1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1},
{1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1},
{1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
{1, 0, 1, 0, 1, 0,0, 0, 1, 1, 1, 1, 0, 1},
{1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1},
{1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1},
{1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
{1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1,0, 1, 1},
{1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};


int mark[m + 2][m + 2];



int path(int sy, int sx, int dy, int dx) {

	listPointer top = NULL;
	int i, j, row, col,nextRow,nextCol,dir,basex,basey,ocount=FALSE;
	int found, num_bktrack = 0, path_length = 0;
	int EXIT_ROW = dy, EXIT_COL = dx;
	ty_element position;
	char ch;

	if (maze[sy][sx] == 1 || maze[dy][dx] == 1) {
		printf("error blocked");
		return 0;
	}

	CONSOLE_SCREEN_BUFFER_INFO presentCur;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &presentCur);
	basex = presentCur.dwCursorPosition.X; // 기준점의 x 좌표
	basey = presentCur.dwCursorPosition.Y; // 기준점의 y 좌표

	for (i = 0; i < m + 2; i++) {
		for (j = 0; j < p + 2; j++) {
			gotoxy(j + basex, i + basey);
			if (maze[i][j] == 1)
					ch = '1';
			else
					ch = '0';
				printf("%c", ch);
			}
		}
	gotoxy(col + basex, row + basey);
	printf("*");
	position.row = sy;
	position.col = sx; 
	position.dir = 0;


	for(i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			mark[1 + i][1 + j] = 0;
		}
	}

}

int main(void) {
	int starty, startx, endy, endx, res;
	printf("출발점, 목표점은?(4개의 정수; 종료는 Control+D Enter): ");
	res = scanf("%d %d %d %d", &starty, &startx, &endy, &endx);
	
	path(starty, startx, endy, endx);

	
}


void gotoxy(int x, int y)
{
	COORD Pos = { x ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}