#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            if ((a == b) && (b == c))
            {
                printf("是等边三角形\n");
            }
            else if ((a == b && b != c) || (a == c && c != b ) || (b == c && c != a))
            {
                printf("是等腰三角形\n");
            }
            else
            printf("普通三角形\n");
            
        }
        else
        printf("不是三角形\n");
    }
    
    return 0;
}