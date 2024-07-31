#include    <stdio.h>
int main()
{   
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%4d%2d%2d",&year,&month,&day);
    printf("year=%d\nmonth=%02d\nday=%02d\n",year,month,day);
    return 0;
}