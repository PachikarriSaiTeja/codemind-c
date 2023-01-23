# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <stdbool.h>


int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    while (slno != fstno);
    return (slno == 1);
}
int main()
{
int hyno;
	scanf("%d",&hyno);

    if (checkHappy(hyno))
	printf("True");
    else
	printf("False");
} 
