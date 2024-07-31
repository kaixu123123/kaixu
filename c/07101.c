#include <stdio.h>

int     sum(int x ,int y) 
{
        return (x + y);
}
int     main ()
{
 int a = 0 ;
 int b = 0 ;
//  scanf("%d %d",&a,&b);
   a = 50 ;
   b = 90 ;
 int add = sum(a,b);
 printf("%d", add );
        return 0;
}