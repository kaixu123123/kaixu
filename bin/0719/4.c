#include <stdio.h>
int search(int arr[], int k ,int si)
{
    int left = 0;
    int right = si -1;
    while (left <= right)

    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < k)
        {
            left = mid +1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
    // 如果执行了 return mid ，return -1 就不会执行了吗
    //    是的，如果在 while 循环中执行了 return mid，
    // 程序会立即从 search 函数中返回，return -1 就不会被执行。
    // return 语句会终止函数的执行并返回指定的值，
    // 所以当找到目标元素并执行 return mid 后，函数的剩余部分将不会被执行。
}
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int si = sizeof(arr) / sizeof(arr[0]);
    int ret = search(arr , k , si);
    if (ret == -1)
    {
        printf("找不到");

    }
    else
    {
        printf("找到了，下标是:%d\n",ret);
    }    
    return 0;
}