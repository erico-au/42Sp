/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:31:38 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/07 00:52:20 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr);

int		main(void)
{
	int n;
	int *nbr;

	nbr = &n;
	n = 1;
	ft_ft(&n);
	return (0);
}
