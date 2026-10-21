#include <stdio.h>
#include <math.h>
int main()
{
    double x, Y;
    printf("nhap x =");
    scanf("%lf", &x);
    Y = pow(5,x) + ((log(pow(x,2) + 5)/log(3))/(log(pow(x,3) + 2)/log(5)));
    printf("Y =%2.lf", Y);
    return 0;
}