/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:18:33 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/14 01:56:14 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] == to_find[y])
		{
			while (str[x + y] == to_find[y])
			{
				if (!to_find[y])
					return (&str[x]);
				y++;
			}
		}
		x++;
	}
	if (*to_find == 0)
	return (str);
	return (0);
}
