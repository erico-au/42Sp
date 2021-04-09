/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:24:24 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/08 18:33:21 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void main(void)
{
	int z;
	int w;
	int *k;
	int *j;

	z = 5;
	w = 2;
	k = &z;
	j = &w;
	ft_ultimate_div_mod(k, j);
}
