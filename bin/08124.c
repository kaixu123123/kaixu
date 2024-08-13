#include <stdio.h>
#include <ctype.h>
int main()
{   
    char ch = 0;
    while (scanf(" %c", &ch) == 1)
    {
        if (isalpha(ch))
        {
            printf("是字母%c\n", ch);
        }
        else
            printf("不是字母%c\n", ch);
    }
    
    return 0;
}