#include <stdio.h>
#include <assert.h>
int my_len(const char* str)
{
    int count = 0;
    assert(str);
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;   
}
int main()
{   
    char arr[] = "hello world";
    int len = my_len(arr);
    printf("%d\n", len);
    return 0;
}