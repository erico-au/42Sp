/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:40:28 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/12 21:43:15 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "0123456789";
	str2 = "abCde2gHi";
	str3 = "2bCde2gHi";
	str4 = "9876543210";
	printf("str1: %s, is_numeric: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_numeric: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_numeric: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, is_numeric: %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}
