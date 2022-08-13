#include <stdio.h>
 
int main(void)
{
    int n, h;
    float v;
    
    scanf("%d %d %f", &n, &h, &v);
    v = v * h;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", v);
    return 0;
}