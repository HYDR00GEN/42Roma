/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:15:33 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/21 14:36:11 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	operators;
	int	nb;

	i = 0;
	nb = 0;
	operators = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		operators++;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (operators % 2 == 1)
		nb = -nb;
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	char *s = "   -+--+123b4506789ab567";
	printf("%d", ft_atoi(s));
}
*/
