#include <stdio.h>
int main()
{   
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    // while(scanf("%c", &ch) != EOF)
    {
            if (ch >= 'a' && ch <= 'z')
            {
                printf("%c\n", ch - 32);
            }
            else
            // else if(ch >= 'A' && ch <= 'Z')
                printf("%c\n", ch + 32);
            // 
            getchar();
    }
    
    return 0;
}