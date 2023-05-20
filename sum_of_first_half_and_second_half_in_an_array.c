#include<stdio.h>
int main()
{
    int arr[100],n,h,f=0,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n/2;i++)
    {
        f=f+i;
    }
    for(i=(n/2)+ 1;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d
",f);
    printf("%d
",s);
    
}

