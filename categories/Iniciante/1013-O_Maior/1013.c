#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, maiorAB, maiorabC;

    scanf("%d %d %d", &a, &b, &c);
    maiorAB = (a + b + abs(a - b)) / 2; 
    maiorabC = (maiorAB + c + abs(maiorAB - c)) / 2;
    printf("%d eh o maior\n", maiorabC); 
	return (0);
}
