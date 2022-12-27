#include <stdio.h>
int main()
{
    int r,rev=0,n,a;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(rev==n) printf("True");
    
    else printf("False");
    
}