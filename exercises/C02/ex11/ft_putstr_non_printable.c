// exercicio para compreender

#include <unistd.h>

int		isnot_printable(char str)
{
	if (str <= 31)
		return (1);
	else
		return (0);
}

void	hex(char str)
{
	if (str % 16 >= 10 && str % 16 <= 15)
	{
		str = str % 16 % 10 + 'a';
		write(1, "1", 1);
		write(1, &str, 1);
	}
	else
	{
		str = str % 16 + '0';
		write(1, "1", 1);
		write(1, &str, 1);
	}
}

void	dectohex(char str)
{
	if (isnot_printable(str) == 1)
	{
		write(1, "\\", 1);
		if (str >= 16)
		{
			hex(str);
		}
		else if (str >= 10 & str <= 15)
		{
			str = 'a' + str / 10 - 1;
			write(1, "0", 1);
			write(1, &str, 1);
		}
		else
		{
			str += '0';
			write(1, "0", 2);
			write(1, &str, 1);
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		isnot_printable(str[cont]) == 1 ? dectohex(str[cont])
		: write(1, &str[cont], 1);
		cont++;
	}
	str[cont] = '\0';
}
