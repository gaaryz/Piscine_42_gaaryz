/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:46:08 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/10 12:28:39 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_dec_to_char( int a, int b, int c )
{
	if (a == 7 && b == 8 && c == 9)
	{
		a = a + 48;
		b = b + 48;
		c = c + 48;
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else
	{
		a = a + 48;
		b = b + 48;
		c = c + 48;
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	aaa;
	int	bbb;
	int	ccc;

	while (aaa <= 7)
	{
		bbb = aaa + 1;
		while (bbb <= 8)
		{
			ccc = bbb + 1;
			while (ccc <= 9)
			{
				ft_put_dec_to_char(aaa, bbb, ccc);
				ccc++;
			}
			bbb++;
		}
		aaa++;
	}
}
/*main(void)
{
	ft_print_comb();
}*/
