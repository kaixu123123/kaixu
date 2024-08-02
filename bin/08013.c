#include    <stdio.h>
#include    <string.h>
void reverse(char arr[])
{
    int left = 0;
    int right = strlen(arr) - 1;
    while (left < right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
    
}
int main()
{   
    char arr[] = "abcdefg";
    reverse(arr);
    printf("%s\n",arr);
    return 0;
}