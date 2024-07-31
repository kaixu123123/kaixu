#include    <stdio.h>
int main ()
{   
    float r = 0.0f;
    float v = 0.0f;
    scanf("%f",&r);
    v = 4/3.0 * r * r * r * 3.1415926;
    printf("%.2f",v);
    return 0;
}