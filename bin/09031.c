#include <stdio.h>
#include <string.h>
int main()
{   
    char name[3] = "";
    char arr[] = "abcdef";
    strcpy(name, arr);
    // name = "zhangsan";
    // 这里试图将字符串常量 "zhangsan" 的地址赋值给字符数组 name，但 name 是一个数组名，代表一个常量指针，不能修改它的值。所以编译器会报错。
    return 0;
}