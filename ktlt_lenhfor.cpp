#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double s = 0;

    printf("Nhap so hang n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            s += 1.0 / (2 * i + 1);
        else
            s -= 1.0 / (2 * i + 1);
    }

    printf("Gia tri gan dung cua pi = %.15lf\n", 4 * s);

    return 0;
}