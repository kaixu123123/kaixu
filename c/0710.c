#include <stdio.h>
int main ()
{
    int choose = 0;
    printf("要好好学习吗？");
    scanf("%d",  &choose );
    if (choose == 1)
    {
        printf("大厂offer\n");

    }
    else
    {
        printf("回家种地\n");
    }

    return 0;
}