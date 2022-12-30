#include <stdio.h>
int main()
{
    int b,a,i,j,flag=0;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
    	if(a%i==0)
    	{
    		flag=flag+i;
		}
    }
    if(flag==a)
    {
    	printf("True");
	}
	else printf("False");
}