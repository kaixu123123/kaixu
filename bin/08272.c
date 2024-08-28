#include <stdio.h>
void print1(int arr[3][5], int r , int c)
{
    int i = 0;
    for (i = 0; i < r; i++)
    {
        int j = 0;
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
void print2(int (*p)[5], int r , int c)
{
    int i = 0;
    for (i = 0; i < r; i++)
    {   
        int j = 0;
        printf("%d ", p[i][j]);
    }
    printf("\n");
}
void print3(int* p)
{

}
int main()
{   
    // 初始化没有使用大括号
    int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6, 7};
    print2(arr , 3, 5);
    print1(arr , 3, 5);
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    print3(data);
    return 0;
}