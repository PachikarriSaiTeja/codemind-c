#include<stdio.h>
int main()
{
	int a,b,r,i,j,sum=0,count=0;
	scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
       { count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
        	sum=sum+1;
		}
    }
    }
    int k=count-sum;
    printf("%d",k);
    
}