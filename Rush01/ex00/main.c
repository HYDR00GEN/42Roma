/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlibrizz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:38:52 by rlibrizz          #+#    #+#             */
/*   Updated: 2022/09/18 14:25:38 by gpanico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int row, int col, char *input);

int	argv_check(char *str, int row)
{
	int	i;
	int	c1;
	int	c2;

	i = 0;
	c1 = 0;
	c2 = 0;
	if (str[0] <= '0' || str[0] > row + 48)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > '0' && str[i] <= row + 48) && (str[i + 1] == ' '))
			if ((str[i + 2] >= '0' && str[i + 2] <= '9'))
				c1++;
		if ((str[i] > '0' && str[i] <= row + 48) && (str[i + 1] == '\0'))
			c1++;
		i++;
	}
	if (c1 == 16)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	row;
	int	col;

	row = 4;
	col = 4;
	if (argc == 2)
	{
		if (argv_check(argv[1], row))
			rush(row, col, argv[1]);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
