#include <stdio.h>
 int max(int x , int y)
    {
    if (x>y)
    return x;
    else
    return y;
    }
int main ()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int c = max(a,b);
    printf("%d",c);
    return 0 ;
}