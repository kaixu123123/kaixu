#include    <stdio.h>
int main()
{   
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = sz - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}