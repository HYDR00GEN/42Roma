/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:36:01 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/19 10:38:48 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "ciao ";
	char dest[] = "fdffdf";
	printf("%s", ft_strcat(dest, src));
}*/