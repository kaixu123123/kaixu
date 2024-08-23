#include <stdio.h>
int main()
{   
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int i = 1;
    while (a * i % b)
    {
        i++;
    }
    printf("%d\n",i * a);
    return 0;
}