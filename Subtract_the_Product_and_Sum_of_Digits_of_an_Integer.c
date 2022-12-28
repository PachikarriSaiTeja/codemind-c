#include <stdio.h>
int main()
{
    int i,unit,tb,b,count=0,charge,r,anit,pro=1,dif;
    scanf("%d",&anit);
    unit=anit;
    while(unit!=0)
    {
        r=unit%10;
        count=count+r;
        pro=pro*r;
        unit=unit/10;
    }
    dif=pro-count;
    printf("%d",dif);
   
}