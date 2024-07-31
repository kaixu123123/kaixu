#include    <stdio.h>
#include    <windows.h>
int main    ()
{   
    char put[20] = {0};
    system("shutdown -t -s 60");
again:
    printf("输入12345678，否则关机\n");
    scanf("%s",put);
    if (strcmp(put , "12345678") == 0)
    {
        system("shutdown -a");
    }
    else
    {
    goto again;
    }
    return  0;
}