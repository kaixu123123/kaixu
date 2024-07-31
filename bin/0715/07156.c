#include    <stdio.h>
int main ()
{   
    int i = 1;
    int a = 0;
    int max = 0;
    scanf("%d",&max);
    while (i<4)
    {
        scanf("%d",&a);
        if (a > max)
        {
            max = a;
        }
        i++;
    }
    printf("%d",max);
    return 0;
}