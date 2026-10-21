#include <stdio.h>

int main()
{
    int n, du;
    int i = 0, j;
    char s[100], temp;

    printf("Nhap so nguyen duong n >= 100: ");
    scanf("%d", &n);

    while (n > 0)
    {
        du = n % 16;

        if (du < 10)
        {
            s[i] = du + '0';
        }
        else
        {
            s[i] = du - 10 + 'A';
        }

        i++;
        n = n / 16;
    }

    s[i] = '\0';

    // Dao nguoc xau
    for (j = 0; j < i / 2; j++)
    {
        temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }

    printf("Xau ky tu so Hex: %s", s);

    return 0;
}