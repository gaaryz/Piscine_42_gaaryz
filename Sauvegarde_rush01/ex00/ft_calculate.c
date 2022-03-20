/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:56:58 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 22:38:24 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_visible_from_top(char **tab, int x, int size)
{
	int	y;
	int	max;
	int	ret;

	y = 0;
	max = 0;
	ret = 0;
	while (size--)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			ret++;
		}
		y++;
	}
	return (ret);
}

int	ft_visible_from_bottom(char **tab, int x, int size)
{
	int	y;
	int	max;
	int	ret;

	y = size - 1;
	max = 0;
	ret = 0;
	while (size--)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			ret++;
		}
		y--;
	}
	return (ret);
}

int	ft_visible_from_left(char **tab, int y, int size)
{
	int	x;
	int	max;
	int	ret;

	x = 0;
	max = 0;
	ret = 0;
	while (size--)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			ret++;
		}
		x++;
	}
	return (ret);
}

int	ft_visible_from_right(char **tab, int y, int size)
{
	int	x;
	int	max;
	int	ret;

	x = size - 1;
	max = 0;
	ret = 0;
	while (size--)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			ret++;
		}
		x--;
	}
	return (ret);
}

int	ft_is_duplicate(char **tab, int x, int y, int size)
{
	int	i;

	i = 0;
	if (!tab[y][x])
		return (0);
	while (size--)
	{
		if ((i != x && tab[y][x] == tab[y][i]) ||
			(i != y && tab[y][x] == tab[i][x]))
			return (1);
		i++;
	}
	return (0);
}
