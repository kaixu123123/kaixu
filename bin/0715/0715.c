#include <stdio.h>
int main ()
{
    int ch = 0;
    while ( (ch = getchar()) != '\n')
    {
        ;
    }
    printf("请确认输入密码(Y/X)");
    int ret = getchar();
    if (ret == 'Y')
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}