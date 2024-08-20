#include <stdio.h>
#include <assert.h>
void mycopy(char* ass, char* add)
{
    assert(ass != NULL);
    assert(add != NULL);
    while (*ass++ = *add++)
    {
        ;
    }
    
}

int main()
{   
    char arr1[20] = "xxxxxxxxxxxx";
    char arr2[] = "hello world";
    mycopy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}