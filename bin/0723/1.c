#include    <stdio.h>
void  print(unsigned int n)
{
    if (n>9)
    {
        print(n / 10 );
    }
    printf ("%d ", n % 10);
}
// 递归
int main ()
{
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);
    return 0;
}