#include <stdio.h>

int main(void)
{
    char    nome[] = "";
    double  salario, vendas, salariofinal;

    scanf("%s %lf %lf", nome, &salario, &vendas);
    salariofinal = salario + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salariofinal);   
    return 0; 
}