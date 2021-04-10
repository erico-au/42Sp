/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:53:13 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/10 17:50:27 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}

void  ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;

	x = -1;
	while (x++ < size)
	{
		y = - 1;
		while (++y < size - x - 1)
		{
			if (tab[y] > tab[y + 1])
				ft_swap(&tab[y], &tab[y + 1]);
		}
	}
}
