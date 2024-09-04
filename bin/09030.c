#include <stdio.h>
int main()
{
    char* c[] = { "enter", "new", "point", "first"};
    // 数组 c 的每个元素是一个指向字符串的指针（char*）。也就是说，c 是一个字符指针数组，其中每个元素指向一个字符串的首字符。
// 具体来说：

// c[0] 指向字符串 "enter" 的首字符 'e'。
// c[1] 指向字符串 "new" 的首字符 'n'。
// c[2] 指向字符串 "point" 的首字符 'p'。
// c[3] 指向字符串 "first" 的首字符 'f'。
// 因此，数组 c 的每个元素是一个字符串，而不是单个字符。
    char** cp[] = { c + 3, c + 2, c + 1, c};
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
    // 影响：--*cpp 只影响 cpp 指向的那个具体元素的值（在这个例子中是 cp[2]）。
// 不影响：cp 数组中的其他元素以及它们的初始值不会被改变。
// cpp[-1]:
// cpp 是一个指向 cp 数组的指针。
// cpp[-1] 表示 cpp 向前移动一个位置，即 cp[1]。cp[1] 指向 c + 2，也就是 c 数组的第三个元素（从 0 开始计数），即 "point"。
// cpp[-1][-1]:
// cpp[-1] 的结果是 cp[1]，它指向 c + 2。
// cpp[-1][-1] 表示 cp[1] 向前移动一个位置，即 c[2]。c[2] 指向 "point"。
// 因此，cpp[-1][-1] 的结果是 "point"。
    return 0;
}