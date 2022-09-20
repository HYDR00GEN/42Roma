/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:25:13 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/18 15:57:49 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("function: %d\n", strcmp("ci", "ci"));
	printf("mia: %d", ft_strcmp("ci", "ci"));
}*/