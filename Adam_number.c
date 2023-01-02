#include<stdio.h>
int main()
{
    int a,b,r,q,sq,ev=0,k,rev=0;
    scanf("%d",&a);
    q=a*a;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    sq=rev*rev;
    while(sq!=0)
    {
        k=sq%10;
        ev=ev*10+k;
        sq=sq/10;
    }
    if(ev==q) printf("True");
    else printf("False");
    
}