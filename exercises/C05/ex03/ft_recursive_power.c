/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:27:32 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/16 16:44:10 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);
{
	if (power < 0 )
		return (0);
	if (power > 0)
		return nb * ft_recursive_power(nb, power - 1);
	else return 1;
}
