/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:33:29 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/27 10:51:19 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		nb *= ft_recursive_factorial(nb -1);
	return (nb);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(-3));
}
*/
