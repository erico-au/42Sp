/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:53:16 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/10 17:51:53 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	int n[] = {1, 2, 7, 0, 5, 6, 3};
	int size, i;

	i = 0;
	size = 7;
	printf("before\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	ft_sort_int_tab(n, size);
	i = 0;
	printf("\nAfter\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	return (0);
}
