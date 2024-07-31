#include <stdio.h>
int main ()
{
    int age = 0;
    scanf("%d",&age);
    if (age<10)
    {
        printf("小孩");

    }
    else if (age >= 10 && age < 20)
    {
        printf("青少年");

    }
    else if (age >= 20 && age < 50)
    {
        printf("中年人");
    }
    else 
        printf("老人");  

    return 0;

}