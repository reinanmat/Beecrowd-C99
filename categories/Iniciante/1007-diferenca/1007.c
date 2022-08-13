#include <stdio.h>

int main(void)
{
    int A, B, C, D, dife;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    dife = (A*B - C*D);
    printf("DIFERENCA = %d\n", dife);
    return 0;
}