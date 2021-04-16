/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:38:23 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/15 17:22:03 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
		x = x * nb--;
	return (x);
}

int	main(void)
{
	int x;

	x = 3;
	printf("%d! = %d\n", x, ft_iterative_factorial(x));

}
