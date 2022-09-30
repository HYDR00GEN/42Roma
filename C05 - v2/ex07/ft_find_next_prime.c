/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 04:06:02 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/28 16:16:36 by opaunas          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int main()
{
	printf("\n(next prime) ESERCIZIO 7:\n\n");
    printf("should output 2: %d\n", ft_find_next_prime(-84));
    printf("should output 2: %d\n", ft_find_next_prime(1));
	printf("should output 89: %d\n", ft_find_next_prime(84));
	printf("should output 2147483647: %d\n", ft_find_next_prime(2147483644));
}
*/
