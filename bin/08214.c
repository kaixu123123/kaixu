#include <stdio.h>
#include <math.h>
int is_number(int i)
{
    int n = 1;
    int tmp = i;
    int sum = 0;
    while (tmp / 10)
    {
        n++;
        tmp /= 10;
    }
    tmp = i;
    while (tmp)
    {
        sum += pow(tmp % 10, n);
        tmp /= 10;
    }
    // 这段代码的作用是将整数 tmp 的每一位数字取出，计算其对应次幂（这里的幂是基于数字的总位数 n），然后累加这些幂的结果到 sum 中。最终，sum 将包含所有位的次幂之和。
    return sum == i;
    // if (sum == i)
    // {
    //     return 1;
    // }
    // else
    //     return 0;
}
int main()
{
    int i = 0;
    for (i = 0; i < 100000; i++)
    {
        if (is_number(i))
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;

}
// 假设 tmp 是 153，n 是 3，因为 153 有三位。

// 第一次循环:

// tmp % 10 提取最后一位数字 3。
// pow(3, 3) 计算 3^3 = 27。
// sum += 27，所以 sum 现在是 27。
// tmp /= 10，所以 tmp 现在是 15。
// 第二次循环:

// tmp % 10 提取 5。
// pow(5, 3) 计算 5^3 = 125。
// sum += 125，所以 sum 现在是 27 + 125 = 152。
// tmp /= 10，所以 tmp 现在是 1。
// 第三次循环:

// tmp % 10 提取 1。
// pow(1, 3) 计算 1^3 = 1。
// sum += 1，所以 sum 现在是 152 + 1 = 153。
// tmp /= 10，所以 tmp 现在是 0。
// 循环结束，因为 tmp 现在是 0。