#include    <stdio.h>
int main()
{   
    int i = 0;
    // for ( i = 1; i <= 100; i++)
    for ( i = 3; i <= 100; i+=3)
    {
        if (i % 3 == 0)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}