#include <stdio.h>
int my_strlen(char* str)
{
    int count = 0;
    while (*str !='\0')
    {
        count++;
        str++;
    }
    return count;
}

int main ()
{   
    char arr[] = "afedf";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}