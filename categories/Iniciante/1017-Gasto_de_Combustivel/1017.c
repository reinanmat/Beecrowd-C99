#include <stdio.h>
#include <math.h>

int main(void)
{
	int 	hs, km;
	double	l;

	scanf("%d %d", &hs, &km);
	l = (double)hs * ((double)km / (double)12);	
	printf("%.3f\n", l);
	return (0);
}
