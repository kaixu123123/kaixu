#include <stdio.h>
#include <assert.h>
char* my_copy(char* ass, char*add)
{
    char* set = ass;
    assert(ass != NULL);
    assert(add != NULL);
    while (*ass++ = *add++)
    {
        ;
    }
    return set;
}
int main()
{   
    char arr1[20] = "xxxxxxxxxxxx";
    char arr2[] = "hello world";
    printf("%s\n",my_copy(arr1, arr2));
    return 0;
}