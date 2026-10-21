#include <stdio.h>

int main()
{
    int n;

    printf("Nhap n = ");
    scanf("%d", &n);

    printf("Cac so nguyen to tu 1 den %d la: ", n);

    for (int i = 2; i <= n; i++)
    {
        int dem = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                dem++;
            }
        }

        if (dem == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}