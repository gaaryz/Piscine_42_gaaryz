/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:00:35 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 22:10:14 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdlib.h>

int	ft_parse_args(char *consts, char *str, int size, int offset)
{
	str += offset * 2;
	while (size--)
	{
		*consts++ = *str++ - '0';
		str++;
	}
	return (1);
}

int	ft_check_paires(char *p1, char *p2, int size)
{
	int	i;

	i = 0;
	while (++i < size)
	{
		if (p1[i] + p2[i] > size + 1)
			return (0);
	}
	return (1);
}

char	**ft_init_consts(char *arg, int size)
{
	char	**consts;

	consts = ft_init_tab(size);
	if (!consts)
		return (NULL);
	if (!ft_parse_args(consts[0], arg, size, 0)
		|| !ft_parse_args(consts[1], arg, size, size)
		|| !ft_parse_args(consts[2], arg, size, size * 2)
		|| !ft_parse_args(consts[3], arg, size, size * 3)
		|| !ft_check_paires(consts[0], consts[1], size)
		|| !ft_check_paires(consts[2], consts[3], size))
	{
		ft_clean(consts, size);
		return (NULL);
	}
	return (consts);
}
