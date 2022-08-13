#include <stdio.h>

int main(void)
{
    float   a, b, c;
    double  pi, tri, cir, tra, qua, ren;

    scanf("%f %f %f", &a, &b, &c);
    pi = 3.14159;
    tri = a * c / 2;            //Area do triangulo
    cir = pi * (c * c);         //Area do circulo
    tra = ((a + b) * c) / 2;    //Area do trapezio 
    qua = b * b;                //Area do quadrado
    ren = a * b;                //Area do retangulo 
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RENTAGULO: %.3lf\n", ren);  
}