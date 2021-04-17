
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char	*pargv;
	int		i;
	int		j;

	pargv = 0;
	i = 1;
	while (i < argc)
	{
		pargv = argv[i];
		j = 0;
		while (pargv[j] != '\0')
		{
			ft_putchar(pargv[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
