#include    <stdio.h>
int main ()
{   
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 10;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int le = 0;
    int ri = sz-1;
    while (le<=ri)
    {
        // int mid = (le + ri )/2;
        int mid = le + (ri-le)/2;
        if (arr[mid] < k)
        {
            le = mid +1;
        }
        else if (arr[mid] > k)
        {
            ri = mid -1;
        }
        else
        {
            printf("找到了，下标是:%d\n",mid);
            break;
        }

    }
    if (le > ri)
    {
        printf("找不到\n");
    }
    
    return 0;
}