/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:45:25 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/13 22:12:53 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	if (n == 0)
		return (0);
	while (x <= n)
	{
		if (*s1 == *s2)
			return (*s1 - *s2);
		x++;
	}
	return (0);

}
