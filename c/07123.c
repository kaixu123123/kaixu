#include <stdio.h>
int main ()
{
    int day = 0;
    scanf("%d",&day);
    switch (day)
    {
    case 1:
            // printf("MON");
        // break;
    case 2:
            // printf("TUE");
        // break;
    case 3:
            // printf("WED");
        // break;
    case 4:
            //  printf("TUES");
        // break;
    case 5:
                printf("weekday");
            break;
    case 6:
    case 7:     printf("weekend");
            break;
    default:
                printf("输入错误!");
            break;
    }
    return 0;
}