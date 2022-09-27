/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:44:20 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/21 18:00:26 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	p;

	p = 0;
	s = 0;
	if (to_find[p] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s + p] == to_find[p] && str[s + p] != '\0')
			p++;
		if (to_find[p] == '\0')
			return (str + s);
		s++;
		p = 0;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "cercoQUESTAparola";
	char to_find[] = "UE";

	printf("Function: %s\n", strstr(str, to_find));
    printf("Mia: %s", ft_strstr(str, to_find));
}
*/
