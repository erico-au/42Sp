/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:55:05 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/15 19:24:54 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	int res;
	int index;

	index = 0;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf ("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf ("%d\n", res);
	return (0);
}
