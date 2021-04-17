
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char	*name;
	int		i;

	name = 0;
	i = 0;
	if (argc > 0)
		name = argv[0];
	while (name[i] != '\0')
	{
		ft_putchar(name[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
