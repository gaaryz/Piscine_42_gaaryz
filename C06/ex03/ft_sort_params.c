/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:45:52 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:12:51 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, *str, 1);
		str++;
	}
}

int	ft_strcmp(char **s1, char **s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int cmp, char **argv)
{
	char	tmp;
	int	i;

	i = 0;
	while (i < cmp)
	{
		ft_strcmp(argv[i], argv[++i]);
	}
	while (cmp > 1)
	{
		ft_putstr(argv[cmp -1]);
		ft_putchar('\n');
		cmp--;
	}
	return (0);
}
