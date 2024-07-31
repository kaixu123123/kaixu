#include  <stdio.h>
struct stu
{
    char name[20];
    int  age;
    char tele[20];
    char sex[6];
};

void print(struct stu* pa)
{
    printf("%s %d %s %s\n",(*pa).name, (*pa).age, (*pa).tele, (*pa).sex);
} 


int main ()
{
    struct stu  a = {"kx",20,"13382550597","male"};
    // printf("%s,%d,%s,%s",a.name,a.age,a.tele,a.sex);
    print(&a);
    return 0;
}