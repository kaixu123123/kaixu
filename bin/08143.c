#include <stdio.h>
int main()
{   
    // int arr[3][4] = {1,2,3,2,3,4,4,5,5,3,3,3};
    // int i = 0;
    // int j = 0;
    // for ( i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 4; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {2,3,4,5};
    int arr3[4] = {3,4,5,6};
    int* parr[3] = {arr1, arr2, arr3};
    int i = 0;
    for ( i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d ", parr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}