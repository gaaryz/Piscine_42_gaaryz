/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:08:02 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/13 11:42:17 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char f_char, char m_char, char l_char)
{
	int		i;

	i = 1;
	ft_putchar(f_char);
	if (x > 1)
	{
		if (x > 2)
		{
			while (i < x - 1)
			{
				ft_putchar(m_char);
				i++;
			}
		}
		ft_putchar(l_char);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	ft_print_line(x, 'o', '-', 'o');
	if (y > 1)
	{
		if (y > 2)
		{
			while (i < y -1)
			{
				ft_print_line(x, '|', ' ', '|');
				i++;
			}
		}
		ft_print_line(x, 'o', '-', 'o');
	}
}
