#include <unistd.h>

void	ft_es_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

c = i < 0 ? 'N' : 'P';