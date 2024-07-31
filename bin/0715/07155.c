#include    <stdio.h>
int main ()
{   
    int arr[4] = {0};
    int i = 0;
    while (i<4)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    int a = 1;
    int max = arr[0];
    while (a<4)
    {
        if (max < arr[a])
        {
            max = arr[a];
        }
        a++;
    }
    printf("%d\n",max);
    return 0;
}