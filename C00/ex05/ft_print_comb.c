/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:40:17 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/11 00:57:57 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_c(int a, int b, int c)
{
	while (c <= 57)
	{
		if (a < b && b < c)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			if (!(a == 55 && b == 56 && c == 57))
				write (1, ", ", 2);
		}
	c++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			check_c (a, b, c);
		b++;
		}
	a++;
	}
	write(1, "\n", 1);
}
