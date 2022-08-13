#include <stdio.h>

int main(void)
{
    double  A, B, media;
     
    scanf("%lf %lf", &A, &B);
    media = (3.5*A + 7.5*B) / 11;  
    printf("MEDIA = %.5f\n", media);  
    return 0;
}