/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:39:14 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/28 16:10:49 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("\n(prime) ESERCIZIO 6:\n\n");
	printf("should output 0: %d\n", ft_is_prime(203958));
	printf("should output 0: %d\n", ft_is_prime(0));
	printf("should output 0: %d\n", ft_is_prime(1));
    printf("should output 0: %d\n", ft_is_prime(-1));
    printf("should output 1: %d\n", ft_is_prime(2));
	printf("should output 1: %d\n", ft_is_prime(2147483647));
}
*/