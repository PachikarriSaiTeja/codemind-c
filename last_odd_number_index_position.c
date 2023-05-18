#include<stdio.h>
int main()
{
    int a,i,c=0,p,avrg,d=0,j,k;
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=a- 1;i>0;i--)
    {
        if(x[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
    }
} 