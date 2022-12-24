#include <stdio.h>

int	main(void)
{
	int temp, h, m, s;
	scanf("%d", &temp);
	h = temp / 3600;
	temp %= 3600;
	m = temp / 60;
	temp %= 60;
	s = temp;
	printf("%d:%d:%d\n", h, m, s);
	return (0);
}
