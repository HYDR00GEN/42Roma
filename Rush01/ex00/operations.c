/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlibrizz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:40:16 by rlibrizz          #+#    #+#             */
/*   Updated: 2022/09/18 14:08:16 by gpanico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int nbr);

int	ft_factorial(int nbr)
{
	int	result;

	result = nbr;
	if (result == 0 || result == 1)
		return (1);
	else if (result < 0)
		return (-1);
	else
	{
		result *= ft_factorial(nbr - 1);
		return (result);
	}
}
