/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:08:12 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 22:12:42 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);	

void	ft_putstr(char *str)
{
	while (!str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	if (argc >= 2)
	{
		while (i++ < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	else
		return (0);
}
