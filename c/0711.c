#include <stdio.h>
void  ABC()
{
    // static int i = 1;
    int i = 1;
    i++  ;
    printf("%d",i);

}

int main ()
{
    int a = 0;
    while (a<10)
    {
        ABC();
        a++;
    }

    return 0;
}