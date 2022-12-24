#include <stdio.h>
 
int main(void)
{
    int numero, horas;
    float valorporhora;
    
    scanf("%d %d %f", &numero, &horas, &valorporhora);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", horas*valorporhora);
    return (0);
}
