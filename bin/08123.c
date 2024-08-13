#include <stdio.h>
int main()
{   
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    // while (scanf(" %c", &ch) == 1)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("是字母%c\n", ch);
        }
        else
        {
            printf("不是字母%c\n", ch);
        }
    // 
        getchar();
    
    }
    
    return 0;
}