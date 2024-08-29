#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
void cale(int(*pf)(int, int))
{
    int a = 3;
    int b = 5;
    int ret = pf(a, b);
    printf("%d\n", ret);
}
int main()
{   
    cale(Add);
    return 0;
}