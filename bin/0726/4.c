#include    <stdio.h>
void test(int arr[])
{
    arr[0] = 3;
    arr[1] = 4;
}

int main()
{
    int arr[2] = { 0 };
    test(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}