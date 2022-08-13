#include <stdio.h>

int main(void)
{
    int codp1, codp2, qtdp1, qtdp2;
    float valorp1, valorp2, total;

    scanf("%d %d %f\n", &codp1, &qtdp1, &valorp1);
    scanf("%d %d %f", &codp2, &qtdp2, &valorp2);
    total = (qtdp1 * valorp1) + (qtdp2 * valorp2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}