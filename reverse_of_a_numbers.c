#include<stdio.h>
int main()
{
	int a,b,r,i,j,flag=0,rev=0;
	scanf("%d",&a);
	j=a;
    while(a!=0)
    {
    	r=a%10;
    	rev=rev*10+r;
    	a=a/10;
	}
	printf("%d",rev);
}