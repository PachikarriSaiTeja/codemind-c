#include <stdio.h>
int main()
{
    int a,b,c,d,i,j,x,z,q,sum=0,p;
    scanf("%d",&a);
    b=a;
    q=a*a;
    p=q;
    while(p!=0)
    {
        int r=p%10;
         sum=sum+r;
         p=p/10;
    }
    if(sum==a) printf("Neon Number");
    else printf("Not Neon Number");
    
    
}