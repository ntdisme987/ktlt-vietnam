#include<stdio.h>
#define PI 3.14

int main()

{
    float r, dien_tich, chu_vi;
    printf("nhap r");
    scanf("%f", &r);

    dien_tich = PI * r *r;
    chu_vi = PI * 2* r;
    printf("dien_tich = %2f\n", dien_tich);
    printf("chu_vi =%2f\n", chu_vi);
    return 0;
}