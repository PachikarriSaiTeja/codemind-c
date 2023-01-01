#include<stdio.h>
int main()
{
	int a,b,c,r,i,j,sum=0,pro=1,rev=0,ev=0;
	scanf("%d",&a);
	j=a;
	while(a!=0)
	{
	    r=a%10;
	    sum=sum+r;
	    pro=pro*r;
	    a=a/10;
	}
	if(sum==pro) printf("Spy Number");
	else printf("Not Spy Number");


   
}