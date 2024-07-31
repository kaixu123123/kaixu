#include    <stdio.h>
void swap(int* ax, int * ay)
{
    int tmp = *ax;
    *ax = *ay;
    *ay = tmp;
}

int main()
{   
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a ,&b ,&c);
    if (a < b)
    {
        swap(&a, &b);
    }
    if (a < c)
    {
        swap(&a, &c);
    }
    if (b < c)
    {
        swap(&b, &c);
    }
    
    printf("%d %d %d\n",a , b, c);   
    return 0;
}
