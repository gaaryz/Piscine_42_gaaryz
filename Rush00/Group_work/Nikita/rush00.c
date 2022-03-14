/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:41:41 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/12 15:23:22 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	if (x > 0 || y > 0)
	{
	int	xx;
	int	yy;

	yy = 0;
	while (yy < y)
	{
		xx = 0;
		while (xx < x)
		{
			if ((xx == 0 && yy == 0) || (xx == x -1 && yy == 0))
				ft_putchar('o');
			else if ((xx == 0 && yy == y - 1) || (xx == x - 1 && yy == y - 1))
				ft_putchar('o');
			else if (yy == 0 || yy == y - 1)
				ft_putchar('-');
			else if (xx == 0 || xx == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (xx == x - 1)
				ft_putchar('\n');
			xx++;
		}
		yy++;
	}
	}
}
