#include <stdio.h>
int main()
{   
    int a = 10;
    int b = 20;
    int c = 30;
    int arr[10];
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;
    int* parr[10] = {&a,&b,&c};
    int i = 0;
    for ( i = 0; i < 3; i++)
    {
        printf("%d\n", *(parr[i]));
    }
    
    return 0;
}