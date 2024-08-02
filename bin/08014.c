#include    <stdio.h>
int sum(unsigned int n)
{
    if (n > 9)
    {
        return sum(n / 10) + n % 10;
    }
    else
        return n;
}
int main()
{   
    unsigned int n = 0;
    scanf("%u", &n);
    int smm = sum(n);
    printf("%d\n", smm);
    return 0;
}