#include "game2.h"
void menu()
{
    printf("*************************\n");
    printf("******1.play*************\n");
    printf("******0.exit*************\n");
    printf("*************************\n");
}
void game()
{
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS] = {0};
    init_board(mine ,ROWS,COLS,'0');
    init_board(show ,ROWS,COLS,'*');
    set_mine(mine ,ROW,COL);
    display_board(show ,ROW,COL);    
    // display_board(mine ,ROW,COL); 
    find_mine(mine ,show, ROW,COL);   

}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}