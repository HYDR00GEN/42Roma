/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlibrizz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:40:22 by rlibrizz          #+#    #+#             */
/*   Updated: 2022/09/18 14:14:52 by gpanico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		**ft_create_mat(int row, int col);
void	ft_free_mat(int **mat, int row);
void	ft_all_in_one(int *one, int *combs, int row);
void	ft_fill_mat(int **mat, int *values, int row, int col);
void	ft_next_comb2(int *comb, int row);
void	ft_print_mat(int **mat, int row, int col);
int		check(int **grid, char *str);
int		ft_check_col(int **mat, int col, int row);

void	ft_init_comb(int *comb)
{
	comb[0] = 1;
	comb[1] = 1;
	comb[2] = 1;
	comb[3] = 1;
}

void	ft_free_all(int *values, int *comb, int **mat, int row)
{
	free(values);
	free(comb);
	ft_free_mat(mat, row);
}

void	rush(int row, int col, char *input)
{
	int	**mat;
	int	*comb;
	int	*values;
	int	end;

	end = 1;
	values = malloc(row * col * 4);
	comb = malloc(row * 4);
	ft_init_comb(comb);
	mat = ft_create_mat(row, col);
	while (comb[0] != 24 || comb[1] != 24)
	{
		ft_all_in_one(values, comb, row);
		ft_fill_mat(mat, values, row, col);
		if (check(mat, input) && ft_check_col(mat, row, col))
		{
			ft_print_mat(mat, row, col);
			end = 0;
			break ;
		}
		ft_next_comb2(comb, row);
	}
	if (end)
		write(1, "Error\n", 6);
	ft_free_all(values, comb, mat, row);
}
