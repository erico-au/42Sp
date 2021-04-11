/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:51:20 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/10 15:06:46 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int j;

	j = 0;
	size = size  - 1;
	while (j <= size)
	{
		x = tab[j];
		tab[j] = tab[size];
		tab[size] = x;
		j++;
		size--;
	}
}
