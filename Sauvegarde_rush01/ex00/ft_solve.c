/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:59:26 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 23:08:23 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	check_table(char **tab, char **consts, int x, int y)
{
	char	*cols_up;
	char	*cols_down;
	char	*rows_left;
	char	*rows_right;
	int		size;

	size = 4;
	cols_up = consts[0];
	cols_down = consts[1];
	rows_left = consts[2];
	rows_right = consts[3];
	if (ft_is_duplicate(tab, x, y, size)
		|| (y == size - 1 && (ft_visible_from_top(tab, x, size) != cols_up[x]
				|| ft_visible_from_bottom(tab, x, size) != cols_down[x]))
		|| (x == size - 1 && (ft_visible_from_left(tab, y, size) != rows_left[y]
				|| ft_visible_from_right(tab, y, size) != rows_right[y])))
		return (0);
	else
		return (1);
}

int	ft_solve(char **tab, char **consts, int size, int index)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = index % size;
	y = index / size;
	if (index == size * size)
		return (1);
	while (++i <= size)
	{
		tab[y][x] = i;
		if (check_table(tab, consts, x, y)
			&& ft_solve(tab, consts, size, index + 1))
			return (1);
	}
	tab[y][x] = 0;
	return (0);
}
