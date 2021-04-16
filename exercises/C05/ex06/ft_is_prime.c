/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:19:43 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/16 00:05:42 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb > 1)
		return (0);
	while (x <= (nb / 2))
	{
		if (nb % x == 0)
			return (1)
		x++;
	}
	return (0);
}
