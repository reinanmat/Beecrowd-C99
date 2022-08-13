#include <stdio.h>

int main(void)
{
    double n1, n2, p1, p2;
    double mediaS, mediaP;
    
    scanf("%lf %lf", &n1, &n2);
    p1 = 3.5;
    p2 = 7.5;   
    mediaS = (n1 + n2) / 2;
    mediaP = ((p1 * n1) + (p2 * n2)) / (p1 + p2);  
    printf("Media Aritmetica Simples = %.5f\n", mediaS);    //Apenas para comparação 
    printf("Media Aritmetica Ponderada = %.5f\n", mediaP);  
}