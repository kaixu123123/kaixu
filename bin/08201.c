#include <stdio.h>
void my_copy(char* ass, char* add)
{
    while (*add != '\0')
    {
        *ass = *add;
        ass++;
        add++;
    }
    *ass = *add;
}
int main()
{   
    char arr1[20] = "XXXXXXXXXXXX";
    char arr2[] = "hello world";
    my_copy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}
