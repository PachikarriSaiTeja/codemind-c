#include <stdio.h>
int main()
{
    int r,rev=0,n,a,i,m,b,c,d,co;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int area = (a+2*c)*(b+2*c)-a*b;
    co=area*d;
    printf("%d",co);
   
}