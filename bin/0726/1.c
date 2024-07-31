#include    <stdio.h>
int main()
{   
    int arr[10] = {1,3,5,7,9,2,4,6,8,0};
    int max = arr[0];
    int i = 0;
    for ( i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    printf("%d\n",max);

    return 0;
}