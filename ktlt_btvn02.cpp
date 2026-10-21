#include <stdio.h>
#include <math.h>
int main()

{
double a, b, c;
double P, n, S;

printf ( "nhap a=");
printf ( "nhap b=");
printf ("nhap c=");
scanf ("%lf %lf %lf", &a, &b, &c);
P = a+b+c;
n = P / 2;
S = sqrt (n*(n-a)*(n-b)*(n-c));

printf(" S =%lf\n", S);
printf(" P= %lf\n", P);

return 0;
}
