#include <stdio.h>
int main()
{
    double a,b,res;
    if ((scanf("%lf",&a)==1)&&(scanf("%lf",&b)==1))
    {
    res=a+b;
    printf("%lf\n",res);
    }
    else
    {
    printf("check input values\n");
    }
    return 0;
}

