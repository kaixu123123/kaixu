#include    <stdio.h>
int my_strlen(char* str)
{
    if (*str != '\0')
    {
        return 1 + my_strlen(str + 1);
//         *str 代表指针 str 所指向的地址处的字符。
// str 代表从指针 str 所指向的地址开始的整个字符串
    }
    else
        return 0;
    
}
// my_strlen("abc") 返回 1 + my_strlen("bc")
// my_strlen("bc") 返回 1 + my_strlen("c")
// my_strlen("c") 返回 1 + my_strlen("")
// my_strlen("") 返回 0
// 将所有的递归调用结果相加：

// 1 + 1 + 1 + 0 = 3
int main ()
{
    char arr[] = "abc";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}