#include<stdio.h>
int main()
{
    int a,d,b,s=0,p=1;
    scanf("%d",&a);
    b = a;
    while(b!=0)
    {
        d = b%10;
        s = s+d;
        p = p*d;
        b = b/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}