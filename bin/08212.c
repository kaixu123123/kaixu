#include <stdio.h>
int main()
{   
    char arr[10] = { 0 };
    gets(arr);
    printf("%s\n", arr);
    return 0;
}