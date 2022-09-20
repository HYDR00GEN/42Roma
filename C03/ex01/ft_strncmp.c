/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:37:33 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/18 17:23:48 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (i + 1 < n) && s1[i] && s2[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}


#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("con function: %d\n", strncmp("ciao", "cizo", 0));
	printf("la nostra: %d", ft_strncmp("ciao", "cizo", 0));
}
