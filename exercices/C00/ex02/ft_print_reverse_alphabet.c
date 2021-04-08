/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:28:33 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/04 19:37:44 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char b;

	b = 'z';
	while (b >= 'a')
	{
		write(1, &b, 1);
		b--;
	}
}
