/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:09:10 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/16 01:23:37 by eaugusto         ###   ########.fr       */
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
