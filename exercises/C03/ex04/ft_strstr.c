/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:18:33 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/15 00:15:29 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		x++;
	}
	return (0);
}
