#include    <stdio.h>
int main ()
{   
    int i = 1;
    int n = 0;
    int ret = 1;
    int sum = 0;
    // scanf  ("%d", &n);
    // ret 的初始值是1，但在循环中，它会不断乘以 i 的值，从而计算出阶乘。因此，ret 的值会随着每次迭代而变化，最终存储了 n! 的结果
    for (n=1 ; n<=10; n++)
    {
        ret = ret * n;
        sum = sum + ret;
    }
    // 计算阶乘的和
    // {
    //     ret = 1;
    //     for (i=1 ; i <=n; i++)
    // {
    //     ret = ret * i;
    // }
    //     sum = sum + ret;
    // }
    
    // 计算阶乘
    // for (i=1 ; i <=n; i++)
    // {
    //     ret = ret * i;
    // }
    printf("%d\n",sum);
    return 0;
}