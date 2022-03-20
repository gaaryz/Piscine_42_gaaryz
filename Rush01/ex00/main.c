/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:38:52 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 23:15:44 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdlib.h>

int	ft_error(char **tab, char **consts, int size)
{
	ft_print_error();
	ft_clean(tab, size);
	ft_clean(consts, size);
	return (0);
}

int	main(int argc, char **argv)
{
	char	**tab;
	char	**consts;
	int		size;

	tab = NULL;
	consts = NULL;
	if (argc != 2)
		return (ft_print_error());
	size = ft_get_size_and_validate(argv[1]);
	if (!size)
		return (ft_print_error());
	tab = ft_init_tab(size);
	consts = ft_init_consts(argv[1], size);
	if (!tab || !consts)
		return (ft_error(tab, consts, size));
	if (ft_solve(tab, consts, size, 0))
		ft_print_tab(tab, size);
	else
		return (ft_error(tab, consts, size));
	ft_clean(tab, size);
	ft_clean(consts, size);
	return (0);
}
