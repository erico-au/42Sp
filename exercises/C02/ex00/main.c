/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:29:50 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/12 19:51:07 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char *dest;

	src = (char*)calloc(18, sizeof(char));
	src = "abcdefghijklmnopq";
	dest = (char*)calloc(18, sizeof(char));
	dest = ft_strcpy(dest, src);
	printf("dest= %s\n", dest);
	return (0);
}
