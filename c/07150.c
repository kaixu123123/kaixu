#include <stdio.h>
int main()
{
    char ai = '\0';
    while ((ai = getchar()) != EOF)
    {
        // if (ai < '0' || ai > '9')
        if (ai >= '0' && ai <='9')
        // {
            continue;
        // }
            putchar(ai);
        
    }
    
    return 0;
}