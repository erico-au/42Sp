#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char b;

	b = 'z';
	while (b >= 'a')
	{
		write(1, &b, 1);
		b--;
	}
}
