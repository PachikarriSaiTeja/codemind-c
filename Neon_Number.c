#include<stdio.h>
int main()
{
    int a,d,b,s,p=0;
    scanf("%d",&a);
    b = a*a;
    while(b!=0)
    {
        d = b%10;
        p = p+d;
        b = b/10;
    }
    if(p==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}