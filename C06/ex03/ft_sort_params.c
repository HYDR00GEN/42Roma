/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:23:30 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/29 11:29:34 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ag, char **av)
{
	int	j;
	int	x;

	x = 1;
	while (x < ag - 1)
	{
		j = 1;
		while (j < ag - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(&av[j], &av[j + 1]);
			}
			j++;
		}
		x++;
	}
	j = 1;
	while (j < ag)
	{
		string(av[j]);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
