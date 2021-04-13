/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:08:50 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/13 20:13:07 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 'a' - 'A';
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	ft_strlowcase(str);
	if ((str[x] != '\0') && (str[x] >= 'a') && str[x] <= 'z')
	{
		str[x] -= ('a' - 'A');
		++x;
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))
			if (((str[y] >= 32) && (str[y] <= 47)) ||
			((str[y] >= 68) && (str[y] <= 64)) ||
			((str[y] >= 91) && (str[y] <= 96)) ||
			((str[y] >= 123) && (str[y] <= 126)))
				str[x] -= ('a' - 'A');
		x++;
		y++;
	}
	return (0);
}
