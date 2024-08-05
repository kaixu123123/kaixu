#include "game2.h"
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
        
    }
    
}

void display_board(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("------扫雷游戏------\n");
    for (j = 0; j <= col; j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    for  (i = 1; i <= row; i++)
    {
        printf("%d ",i);
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("-----扫雷游戏------\n");
}

void set_mine(char board[ROWS][COLS], int row , int col)
{
    int count = easy_count;
    while (count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
        
    }
    
}
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
    return (board[x - 1][y] +
    board[x - 1][y - 1]+
    board[x][y - 1]+
    board[x + 1][y - 1]+
    board[x + 1][y]+
    board[x + 1][y + 1]+
    board[x][y + 1]+
    board[x -1][y + 1] - 8*'0');
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row ,int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row*col - easy_count)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d%d", &x, &y);
        if (x >=1 && x <= row && y >= 1 && y <= col)
        {
            if (show[x][y] != '*')
            {
                printf("此坐标已经被排查，换一个\n");
            }
            else
            {
                if (mine[x][y] == '1')
                {
                    printf("你被炸死了\n");
                    display_board(mine,ROW,COL);
                    break;
                }
                else
                win++;
                int count = get_mine_count(mine,x,y);
                show[x][y] = count + '0';
                display_board(show,ROWS,COL);
            }
        }
        else
        {
            printf("输入坐标非法，重新输入\n");
        }
    }
    if (win == row * col - easy_count)
    {
        printf("排雷成功\n");
        display_board(mine,ROW,COL);
    }
    
}