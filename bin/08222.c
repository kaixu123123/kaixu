#include <stdio.h>
#include <assert.h>
#include <string.h>
void reverse(char* left, char * right)
{
    assert(left);
    assert(right);
    while (left < right)
    {
        char tmp = * left;
        *left = * right;
        *right = tmp;
        left++;
        right--;
    }
    
}
int main()
{   
    char arr[100] = { 0 };
    gets(arr);
    int len = strlen(arr);
    reverse(arr, arr + len - 1);
    // 通过调用 reverse(arr, arr + len - 1)，你将整个字符串进行一次全局反转。
    char* start = arr;
    while (*start)
    {
        char* end = start;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (*end != '\0')
        {
            end++;
        }
        start = end;
    }
    printf("%s\n", arr);
    return 0;
}