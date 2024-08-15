#include <stdio.h>
int main()
{   
    int a =10;
    int* pa = &a;
    int** ppa = &pa;
    **ppa = 20;
    // *pa = 20;
    printf("%d", a);
    return 0;
}