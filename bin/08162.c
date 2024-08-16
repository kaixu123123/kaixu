#include <stdio.h>
// int differ(int m, int n)
// {
//     int count = 0;
//     int i = 0;
//     for (i = 0; i < 32; i++)
//     {
//         if (((m >> 1) & 1) != ((n >> i) & 1))
//         {
//             count++;
//         }
        
//     }
//     return count;
// }
int differ(int m, int n)
{
    int count = 0;
    int ret = m ^ n;
    while (ret)
    {
        ret = ret & (ret - 1);
        count++;
    }
    return count;
}
int main()
{   
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int ret = differ(m, n);
    printf("%d\n", ret);
    return 0;
}