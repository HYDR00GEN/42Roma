/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanico <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:10:09 by gpanico           #+#    #+#             */
/*   Updated: 2022/09/11 12:40:37 by gpanico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	check_line(int x, int y, int flag, int i);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y && x > 0)
	{
		check_line(x, y, 1, i);
		while (j < x - 2)
		{
			if (i == 0 || i == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		check_line(x, y, 0, i);
		ft_putchar('\n');
		i++;
		j = 0;
	}
}

void	check_line(int x, int y, int flag, int i)
{
	if (flag)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == y -1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 && x > 1)
			ft_putchar('C');
		else if (i == y -1 && x > 1)
			ft_putchar('A');
		else if (x > 1)
			ft_putchar('B');
	}
}
