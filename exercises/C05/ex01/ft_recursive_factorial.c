/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:13:23 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/15 17:55:59 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return nb * ft_recursive_factorial(nb - 1);
	else return 1;
}

int	main(void)
{
	int n;
	int res;

	n = -10;
	while (n <= 10)
	{
		res = ft_recursive_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}