#include<stdio.h>
int main()
{
	int a,b,c,r,i,j,sum=0,count=0,rev=0,ev=0;
	scanf("%d",&a);
    for(i=1;i<=1000;i++)
    {
        if(i*i==a) 
        {
        	count++;
		}
    }
    if(count!=0) printf("True");
    else printf("False");
   
}