#include <stdio.h>

int main(void)
{
    char    nome[10];
    double  salario, vendas, total;

    scanf("%s %lf %lf", nome, &salario, &vendas);
    total = salario + (vendas * 0.15);
    printf("TOTAL = %.2f", total);    
}