#include <stdio.h>
 
int main(void) 
{
    double  a, b, c, pi, tri, cir, tra, qua, ren;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    pi = 3.14159;
    tri = (a * c) / 2;
    cir = pi * (c * c);
    tra = ((a + b) * c) / 2;
    qua = b * b;
    ren = a * b;
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ren);
}