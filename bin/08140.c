#include <stdio.h>
int main()
{   
    int arr[10] = {0};
    int* p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%p---------%p\n", &arr[i],p + i);
    }
    
    return 0;
}