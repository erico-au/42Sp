/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:08:50 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/13 20:43:56 by eaugusto         ###   ########.fr       */
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

//-------------ok-------------------------------------------------

int		is_alphanumerical(char str)
{
	if (((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
	|| (str >= 48 && str <= 57))
	{
		return (1);
	}
	else
		return (0);
}

int		is_lowercase(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	else
		return (0);
}

int		is_uppercase(char str)
{
	if (str >= 65 && str <= 90)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (is_alphanumerical(str[cont - 1]) == 1)
		{
			if (is_uppercase(str[cont]) == 1)
				str[cont] += 32;
		}
		else if ((is_alphanumerical(str[cont - 1]) == 0
		&& is_alphanumerical(str[cont + 1]) == 0)
		|| (is_alphanumerical(str[cont - 1]) == 0
		&& is_alphanumerical(str[cont + 1]) == 1))
		{
			if (is_lowercase(str[cont]) == 1)
				str[cont] -= 32;
		}
		cont++;
	}
	return (str);
}
