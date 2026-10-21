#include <stdio.h>

int main()
{
    int a[100], n;
    int i, j, temp;

    printf("Nhap n = ");
    scanf("%d", &n);

    printf("Nhap day so:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sap xep tang dan
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Day sau khi sap xep tang dan:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}