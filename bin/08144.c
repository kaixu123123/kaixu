#include <stdio.h>
struct Peo
{
    char name[20];
    char tale[12];
    char sex[7];
    int high;
};
struct St
{
    struct Peo p;
    int num;
    float f;
};
void print2(struct Peo* sp)
{
     printf("%s %s %s %d\n", sp->name, sp->tale, sp->sex, sp->high);
}
void print1(struct Peo p)
{
    printf("%s %s %s %d\n", p.name, p.tale, p.sex , p.high);
}
int main()
{   
    struct Peo p1 ={"lisa", "111111111111", "male", 180};
    struct St s ={{"lisi", "122222222222", "female", 160}, 100, 3.14f};
    printf("%s %s %s %d\n", p1.name, p1.tale, p1.sex, p1.high);
    printf("%s %s %s %d %d %f\n", s.p.name, s.p.tale, s.p.sex, s.p.high, s.num, s.f);
    print1(p1);
    print2(&p1);
    return 0;
}