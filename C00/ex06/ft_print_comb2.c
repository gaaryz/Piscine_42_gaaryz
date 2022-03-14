/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:01:59 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/10 20:11:08 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_une_fonction(int a, int b)
{
	int	modulo_a;
	int	modulo_b;
	int	div_a;
	int	div_b;

	modulo_a = a % 10 + 48;
	div_a = a / 10 + 48;
	modulo_b = b % 10 + 48;
	div_b = b / 10 + 48;
	if (a < b)
	{
		ft_putchar(' ');
		ft_putchar(div_a);
		ft_putchar(modulo_a);
		ft_putchar(' ');
		ft_putchar(div_b);
		ft_putchar(modulo_b);
		if (b == 99 && a == 98)
		{
			ft_putchar('\n');
		}
		else
			ft_putchar(',');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 99)
	{
		second = 0;
		while (second <= 99)
		{
			if (first < second)
				ft_une_fonction(first, second);
			second++;
		}
		first++;
	}
}
/*
main(void)
{
	ft_print_comb2();
}*/
