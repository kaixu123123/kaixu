#include    <stdio.h>
int main    ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a,& b, &c);
    int tmp = 0;
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d\n",a, b, c);
    return 0;
}