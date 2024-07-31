#include  <stdio.h>
int main ()
{
    int mark = 0 ;
    printf("开始学习");
    while (mark < 100)
    {
        mark++ ;
        printf("继续学习%d", mark);
    }
    if (mark == 100 )
    {
        printf("大厂offer");
    }
    else 
    {
        printf("继续加油");
    }

    return 0;
}