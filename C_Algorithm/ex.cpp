#include <stdio.h>
#define numRow 10
#define numCol 10
#define stack_size 100
#define EXIT_ROW 9
#define EXIT_COL 9
#define TRUE 1
#define FALSE 0

typedef struct {
    short int vert;
    short int horiz;
} offsets;

typedef struct {
    short int row;
    short int col;
    short int path_flag; // 프린트 할 요소 flag
} element;

int maze[numRow][numCol] = {
        {0,0,1,0,1,1,1,0,1,0},
        {1,0,0,1,1,1,0,1,0,1},
        {1,1,0,1,1,0,1,0,1,1},
        {0,0,1,0,1,1,1,0,0,0},
        {0,1,1,0,1,0,1,0,1,0},
        {1,0,1,1,1,1,0,0,1,0},
        {1,1,0,1,0,1,0,0,1,0},
        {1,0,0,0,1,0,1,0,0,0},
        {0,1,0,1,1,1,0,1,1,0},
        {1,0,0,1,1,1,0,0,0,0}
};

offsets move[8] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1} };
element stack[stack_size + 1];
int top = 0;

element push(element val)
{
    if (top >= stack_size - 1) {
        printf("Stack Overflow.");
    }
    stack[++top] = val;
    return val;
}

element pop(void) {
    if (top < 0) {
        printf("Stack Underflow.");
    }
    int pop = top--;
    return stack[pop];
}

void path(void)
{
    int i, row, col, nextRow, nextCol, dir, cnt, found = FALSE;
    element position, flag;
    dir = 0;
    position.row = 0; position.col = 0; position.path_flag = 1;
    push(position);
    while (top > -1 && !found) {
        position = pop();
        row = position.row; col = position.col;
        position.path_flag = 1;
        push(position);
        cnt = 0;
        while (dir < 8 && !found) {
            nextRow = row + move[dir].vert;
            nextCol = col + move[dir].horiz;
            if (row == EXIT_ROW && col == EXIT_COL) {
                found = TRUE;
            }
            else if (!maze[nextRow][nextCol] && nextRow > -1 && nextCol > -1 && nextRow < numRow && nextCol < numCol) {
                position.row = nextRow; position.col = nextCol; position.path_flag = 0;
                push(position);
                cnt++;
            }
            dir++;
        }
        if (!cnt) {
            while (1) {
                flag = pop();
                if (flag.path_flag == 0) {
                    push(flag);
                    break;
                }
            }
        }
        dir = 0;
        maze[row][col] = 1;
    }
    if (found) {
        printf("The path is: \n");
        printf("row  col\n");
        for (i = 0; i <= top; i++) {
            if (stack[i].path_flag) printf("%2d %5d\n", stack[i].row, stack[i].col);
        }
        printf("%2d %5d\n", row, col);
    }
    else printf("The maze does not have a path \n");
}

int main()
{
    path();
    return 0;
}