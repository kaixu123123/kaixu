#include <stdio.h>
#include <string.h>
struct Stu
{
    char name[20];
    int age;
    double score;
};
void set_stu(struct Stu* ps)
{
    strcpy(ps -> name,"zhangsan");
    ps ->age = 20;
    ps ->score = 100.0;
}
void print_stu(struct Stu* ps)
{
    printf("%s %d %.2lf\n",ps ->name, ps ->age, ps ->score);
}
int main()
{   
    struct Stu s = {0};
    set_stu(&s);
    print_stu(&s);
     
    return 0;
}
