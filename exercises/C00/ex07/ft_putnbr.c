/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:29:29 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/15 11:31:35 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "-1: ", 4);
	ft_putnbr(-1);
	write(1, "\n1: ", 4);
	ft_putnbr(1);
	write(1, "\n-10: ", 6);
	ft_putnbr(-10);
	write(1, "\n10: ", 5);
	ft_putnbr(10);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(333);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(33333);
	write(1, "\n", 1);
	return (0);
}


void	ft_putnbr(int nb)
{
	char	n;
	int		all;

	all = 1000000000;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	while (all >= 1)
	{
		n = (nb / all) + '0';
		nb = nb % all;
		if (n != '0')
			write(1, &n, 1);
		all = all / 10;
	}
}
