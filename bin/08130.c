#include <stdio.h>
int main()
{
int arr[10] = {0};
int i = 0;
int sz = sizeof(arr) / sizeof(arr[0]);
int* p = arr;
for (i = 0; i < sz; i++)
{
    *p = 1;
    p++;
    printf("%d ", arr[i]);
}
return 0;
}
