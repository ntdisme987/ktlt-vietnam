#include <stdio.h>

int main()
{
    int a[100][100];
    int m, n;
    int i, j;
    int tong = 0, dem = 0;
    float tbc;

    // Nhap so hang, so cot
    printf("Nhap so hang m = ");
    scanf("%d", &m);

    printf("Nhap so cot n = ");
    scanf("%d", &n);

    // Nhap ma tran
    printf("Nhap ma tran:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Tinh tong cac phan tu duong chan
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > 0 && a[i][j] % 2 == 0)
            {
                tong = tong + a[i][j];
                dem++;
            }
        }
    }

    // Xuat ma tran
    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    // Tinh trung binh cong
    if (dem > 0)
    {
        tbc = (float)tong / dem;
        printf("\nTong cac phan tu duong chan = %d", tong);
        printf("\nTrung binh cong = %.2f", tbc);
    }
    else
    {
        printf("\nKhong co phan tu duong chan.");
    }

    return 0;
}