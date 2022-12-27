#include <stdio.h>
int main()
{
    int r,rev=0,n,a,i,m;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i=i+2)
    {
        r=m*i;
     printf("%d x %d = %d
",m,i,r);
    }
   
}