#include <string.h>
#include <stdio.h>
void reverse(char arr[], int left, int right)
{
    if (left < right)
    {
        char tmp = arr[left];
        arr[left] = arr [right];
        arr [right] = tmp;
        reverse(arr, left + 1, right - 1);
    }
}   
    int   main()
    {   
        char arr[] = "abcdefg";
        int left = 0;
        int right = strlen(arr) - 1;
        reverse(arr, left, right);
        printf("%s\n",arr);
        return 0;
    }