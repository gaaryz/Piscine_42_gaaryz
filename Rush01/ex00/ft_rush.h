/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:01:04 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 23:09:22 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

int		ft_get_size_and_validate(char *str);

int		ft_print_error(void);

int		ft_solve(char **tab, char **consts, int size, int index);

int		ft_is_duplicate(char **tab, int x, int y, int size);

int		ft_visible_from_top(char **tab, int x, int size);

int		ft_visible_from_bottom(char **tab, int x, int size);

int		ft_visible_from_left(char **tab, int y, int size);

int		ft_visible_from_right(char **tab, int y, int size);

int		ft_check_paires(char *p1, char *p2, int size);

char	**ft_init_tab(int size);

char	**ft_init_consts(char *arg, int size);

void	ft_clean(char **tab, int size);

void	ft_print_tab(char **tab, int size);

#endif
