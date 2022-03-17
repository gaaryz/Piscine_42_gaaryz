/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:52:31 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 13:57:30 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recu(int n)
{
	unsigned int	b;

	if (n == 0)
		return ;
	ft_recu(n / 10);
	b = n % 10;
	ft_putchar(b + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n < 9)
		ft_putchar(n + '0');
	else
	{
		ft_recu(n);
	}
}
/*
int main(void)
{
	int nb = 156843584;
	ft_putnbr(5454540);
	return (0);
}*/
