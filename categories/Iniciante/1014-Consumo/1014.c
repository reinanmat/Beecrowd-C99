#include <stdio.h>

int main(void)
{
    int dis;
    float   comb, kml;

    scanf("%d %f", &dis, &comb);
    kml = dis / comb;
    printf("%.3f km/l\n", kml);
	return (0);
}
