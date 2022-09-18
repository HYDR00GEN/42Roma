/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlibrizz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:39:11 by rlibrizz          #+#    #+#             */
/*   Updated: 2022/09/18 14:07:10 by gpanico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_col(int **mat, int col, int row);

int	ft_check_col(int **mat, int col, int row)
{
	int	i;
	int	j;
	int	h;
	int	diff;

	i = -1;
	while (++i < col)
	{
		j = -1;
		while (++j < row)
		{
			h = -1;
			diff = 0;
			while (++h < row)
			{
				if (mat[j][i] == mat[h][i])
					diff++;
			}
			if (diff > 1)
				return (0);
		}
	}
	return (1);
}
