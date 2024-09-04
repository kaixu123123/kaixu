#include <stdio.h>
int main()
{
    char* c[] = { "enter", "new", "point", "first"};
    char** cp[] = { c + 3, c + 2, c + 1, c};
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp + 3);
    // 影响：--*cpp 只影响 cpp 指向的那个具体元素的值（在这个例子中是 cp[2]）。
// 不影响：cp 数组中的其他元素以及它们的初始值不会被改变。
    return 0;
}