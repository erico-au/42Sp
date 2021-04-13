/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaugusto <eaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:54:44 by eaugusto          #+#    #+#             */
/*   Updated: 2021/04/12 20:50:26 by eaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char			*src;
	char			*dest;
	unsigned int	n;

	n = 18;
	src = (char*)calloc(n, sizeof(char));
	src = "abcdefghijklmnopq";
	dest = (char*)calloc(n, sizeof(char));
	dest = ft_strncpy(dest, src, n);
	printf("dest= %s\n", dest);
	return (0);
}
