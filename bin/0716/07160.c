#include    <stdio.h>
int main ()
{   
    int weight = 0;
    int height = 0;
    scanf("%d %d", &weight , &height);
    // float bmi = 0.0f;
    float bmi = weight/(height/100.0)/(height/100.0);
    printf("%.4f",bmi);    
    return 0;
}