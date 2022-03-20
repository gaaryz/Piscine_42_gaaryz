/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:58:19 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 23:07:22 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdlib.h>

void	ft_clean(char **tab, int size)
{
	int	i;

	if (tab)
	{
		i = 0;
		while (++i < size)
		{
			if (tab[i])
				free(tab[i]);
		}
		free(tab);
	}
}

char	**ft_init_tab(int size)
{
	char	**tab;
	int		x;
	int		y;

	tab = malloc(size * sizeof(char *));
	if (!tab)
		return (NULL);
	y = -1;
	while (++y < size)
	{
		tab[y] = malloc(size * sizeof(char));
		if (!tab[y])
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
	}
	return (tab);
}
