#include <stdio.h>
#include <math.h>

int main()
{
    double x, S, tu;
    int n;

    printf("Nhap x = ");
    scanf("%lf", &x);

    S = 1;
    tu = 1;
    n = 1;

    while (fabs(tu) >= 0.0001)
    {
        tu = tu * x / n;
        S = S + tu;
        n++;
    }

    printf("e^x gan dung = %.6lf", S);

    return 0;
}