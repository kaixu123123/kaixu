#include <stdio.h>
int main()
{   
    int money = 0;
    scanf("%d", &money);
    int total = money;
    int empty = money;
    // while (empty >= 2)
    // {
    //     total += empty / 2;
    //     empty = empty / 2 + empty % 2;
    // }
    if (money > 0)
    {
        printf("%d\n", 2 * money - 1);
    }
    else
        printf("%d\n", 0);
    // printf("%d", total);
    return 0;
}