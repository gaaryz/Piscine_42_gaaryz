/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:58:10 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 13:09:46 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sling(int nb)
{
	char	to_print;

	if (nb == 0)
		_exit;
	ft_sling(nb / 10);
	to_print = nb % 10 + 48;
	ft_putchar(to_print);
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483647 || nb > 2147483647)
		_exit;
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	ft_sling(nb);
}

int main() {
ft_putnbr(21474838);
  return (0);
}
