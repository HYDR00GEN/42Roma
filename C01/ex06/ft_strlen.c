/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:06:47 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/13 23:08:20 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int		main (void)
{
	char str[] = "fjghwiughiuwqghiuwghiwghiuwhgiuhgiwhiguh";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
