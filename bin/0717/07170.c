#include    <stdio.h>
#include    <string.h>
int main ()
{   
    int i = 0;
    char passwd[20] = {0};
    for ( i = 0; i < 3; i++)
    {
        printf("请输入密码\n");
        scanf("%s",passwd);
        if (strcmp(passwd,"123456") == 0)
        {
            printf("登陆成功\n");
            break;
        }
        else
            printf("登录失败\n");
    }
    if (i == 3)
    {
        printf("退出登录");
    }
    
    return 0;

}