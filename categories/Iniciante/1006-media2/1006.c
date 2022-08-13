#include <stdio.h>

int main(void)
{
    double  A, B, C, media;

    scanf("%lf %lf %lf", &A, &B, &C);
    media = (2*A + 3*B + 5*C) / 10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}