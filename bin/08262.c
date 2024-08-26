#include <stdio.h>
int main()
{   
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    int arr3[m + n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    {
        scanf("%d", &arr2[i]);
    }
    int j = 0;
    int k = 0;
    int r = 0;
    while (j < n && k < m)
    {
        if (arr1[j] < arr2[k])
        {
            arr3[r++] = arr1[j];
            j++;
        }
        else
        {
            arr3[r++] = arr2[k];
            k++;
        }
        
    }
    if (j < n)
    {
        for ( ; j < n; j++)
        {
            arr3[r++] = arr1[j];
        }
        
    }
    else
    {
        for ( ; k < m; k++)
        {
            arr3[r++] = arr2[k];
        }
        
    }
    for (i = 0; i < m + n; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    return 0;
}   