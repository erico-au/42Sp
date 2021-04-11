/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:28:28 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/08 12:30:41 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb)
{
	char	n;
	int		div;
	int		r;
	int		all;

	r = 0;
	all = 1000000000;
		if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
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
		div = nb / all;
		nb = nb % all;
		n = div + '0';
		if (div != 0)
			r = 1;
		if (r == 1)
			write(1, &n, 1);
		all = all / 10;
	}
}
