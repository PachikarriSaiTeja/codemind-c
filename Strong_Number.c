#include<stdio.h>
int main()
{
	int a,b,r,i,j,f,sum=0,str;
	scanf("%d",&a);
	str=a;
	while(a!=0)
	{   r=a%10;
	    f=1;
	    for(i=1;i<=r;i++)
	       f=f*i;
	       sum=sum+f;
	       a=a/10;
	}
	 if(sum==str) printf("The number %d is a strong number",str);
     else printf("The number %d is not a strong number",str);
}