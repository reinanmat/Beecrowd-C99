#include <stdio.h>

int main(void)
{
    int a, b, c, d, dife;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    dife = (a * b - c * d);
    printf("%d\n", dife);
}