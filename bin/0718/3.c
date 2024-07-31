#include    <stdio.h>
#include    <math.h>
int is_prime(int n)
{   
    int j = 0;
    int limit = (int)sqrt(n);
//     在质数检查中，计算 sqrt(n) 并将其结果存储在一个变量中，有以下几个好处：

// 提高代码效率：计算 sqrt(n) 只需一次，并将其结果存储在 limit 变量中。在循环中使用这个预计算的值，而不是每次迭代都重新计算 sqrt(n)。

// 代码可读性：将 sqrt(n) 的结果存储在一个有意义的变量名（如 limit）中，可以提高代码的可读性，明确显示内循环的上限。
    for ( j = 2; j <= limit; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
        return 1;
    }
    
}
int main    ()
{   
    int i = 0;
    int count = 0;
    for ( i = 101; i <= 200; i+= 2)
    {
        if (is_prime(i))
        {
            printf("%d ",i);
            count ++;
        }
        
    }
    printf("\ncount= %d\n",count);
    return 0;
}