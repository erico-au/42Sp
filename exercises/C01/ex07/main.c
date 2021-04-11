/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:50:09 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/10 17:25:56 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int n[] = {1, 2, 3, 4, 5, 6, 7};
	int size, i;

	i = 0;
	size = 7;
	printf("before\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	ft_rev_int_tab(n, size);

	i = 0;
	printf("\nAfter\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	return (0);
}