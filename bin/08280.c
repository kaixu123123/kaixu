#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
int main()
{   
    int a = 10;
    int* pa = &a;
    *pa = 20;
    printf("%d\n", *pa);
    int arr[5] = {0};
    int (*p)[5] = &arr;
    int (*pf)(int, int) = &Add;
    // int (*pf)(int, int) = Add;
    int ret = (*pf)(2, 3);
    int rat = Add(2, 3);
    int rst = pf(2, 3);
    printf("%d\n", ret);
    printf("%d\n", rst);
    printf("%d\n", rat);
    return 0;
}