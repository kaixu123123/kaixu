#include <stdio.h>
int fib(int n)
{
    if (n <= 2)
    {
        return 2;
    }
    else
    {
        return fib(n-1) + fib(n -2);
    }
    
}
int main()
{   
    int n = 0;
    scanf("%d", &n);
    int m = fib(n);
    printf("%d", m);
    return 0;
}