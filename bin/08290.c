#include <stdio.h>
void menu()
{
    printf("******************************\n");
    printf("*****1.add   2.sub************\n");
    printf("*****3.mul   4.div************\n");
    printf("*****0.exit ******************\n");
    printf("******************************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
void cale(int (*pf)(int, int))
{
    int x = 0;
    int y = 0;
    int ret = 0;
    printf("输入两个数");
    scanf("%d %d", &x, &y);
    ret = pf(x, y);
    printf("%d\n", ret);
}
int main()
{   
    int input = 0;
    do
    {
        menu();
        printf("choose");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            cale(Add);
            break;
        case 2:
            cale(Sub);
            break;
        case 3:
            cale(Mul);
            break;
        case 4:
            cale(Div);
            break;
        default:
            printf("输入错误");
            break;
        }
    } while (input);
    
    return 0;
}