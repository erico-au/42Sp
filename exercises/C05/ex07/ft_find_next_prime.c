/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:09:10 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/16 16:50:19 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x <= (nb / 2))
	{
		if (nb % x == 0)
			return (ft_find_next_prime(nb +1));
		x++;
	}
	return (nb);
}


#include <stdio.h>

int main()
{
	int x = 98;

	printf("numero = %d proximo = %d \n ", x, ft_find_next_prime(x));
}


int		ft_is_prime2(int nb)
{
	int a;
	int test;

	test = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		a = nb;
		while (a > 1)
		{
			if (nb % a == 0)
				test++;
			if (test > 1)
				return (0);
			a--;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	if (nb >= 2147483630)
		return (2147483647);
	if (nb < 3)
		return (2);
	while (ft_is_prime2(n) != 1)
		n++;
	return (n);
}