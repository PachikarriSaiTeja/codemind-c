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
    int cx=0;
     for(i=0;i<a;i++)
    {
        if(x[i]%2==0){
        cx=cx+x[i];}
        
    }
    int dx=0;
    for(i=0;i<a;i++)
    {
        if(x[i]%2!=0)
        {
          dx=dx+x[i];
        }
    }
    j=cx-dx;
    k=dx-cx;
    if(cx>dx) printf("%d",j);
    else printf("%d",k);
} 