#include <stdio.h>
int check_sys()
{
    int a = 1;
    return *(char*)&a;
}
int main()
{   
    int ret = check_sys();
    if (ret == 1)
    {
        printf("大端\n");
    }
    else
        printf("小端\n");
    return 0;
}