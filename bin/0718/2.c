#include    <stdio.h>
#include    <math.h>

int main    ()
{   
    int i = 0;
    int count = 0;
    for ( i = 101; i < 200; i +=2)
    {
        int flag = 1;
        int j = 0;
        int limit = (int)sqrt(i);
        for ( j = 2; j <= limit; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            count++;
            printf("%d ",i);
        }
        
    }
    printf("\ncount = %d\n",count);
    
    return 0;
}