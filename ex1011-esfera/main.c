#include <stdio.h>

int main(void)
{
    double raio, pi, volume;

    scanf("%lf", &raio);
    pi = 3.14159;
    volume = (4 / 3.0) * pi * (raio * raio * raio);
    printf("VOLUME = %.3f\n", volume);
}