#include <string.h>
#include <stdio.h>
// int my_strlen(char* str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
int my_strlen(char* str)
{
    char* start = str;
    while (*str != '\0')
    {
        str++;
    }
    return (str - start);
}
int main()
{   
    int len = my_strlen("abcdef");
    printf("%d\n", len);    
    return 0;
}