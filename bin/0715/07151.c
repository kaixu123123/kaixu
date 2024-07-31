#include <stdio.h>
int main()
{   
    int arr[] = {73,32,9,97,110,32,105,116,33};
    int i = 0;
    int sum = sizeof(arr)/sizeof(arr[0]);
    while ( i < sum )
    {
        printf("%c",arr[i]);
        i++;
    }
    
    return 0;
}
// 73 对应 ASCII 字符 I
// 32 对应空格字符
// 9 对应水平制表符 \t
// 97 对应字符 a
// 110 对应字符 n
// 32 对应空格字符
// 105 对应字符 i
// 116 对应字符 t
// 33 对应字符 !