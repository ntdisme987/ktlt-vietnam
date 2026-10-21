# include <stdio.h>
# include <math.h>
int main ()
{
    int a, b;
    printf ("nhap a=,nhap b=");
    scanf ("%d %d",&a, &b);
    while (b !=0)
    {
        int r = a % b;
        a=b;
        b=r;
    }
    printf ("UCLN = %d\n", a );

    return 0;
}