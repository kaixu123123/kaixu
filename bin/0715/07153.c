#include    <stdio.h>
int main ()
{
    int memb = 0;
    float china = 0.0f;
    float math = 0.0f;
    float eng = 0.0f;
    scanf("%d;%f,%f,%f",&memb,&china,&math,&eng);
    printf("%d is %.2f , %.2f , %.2f\n",memb,china,math,eng);
    return 0;
}