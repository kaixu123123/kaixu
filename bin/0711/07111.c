#include <stdio.h>
int main ()
{
    int a = 10;
    int*  p = &a;


    // printf("%d",p);
    *p = 20;
    printf("%d",a);




    return 0;
}