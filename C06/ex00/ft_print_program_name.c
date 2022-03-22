/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:42:44 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 22:07:47 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);	
}
void	ft_putstr(char *str)
{
	while (!str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	if (argc < 2)///////// A REFAIRE ///////////////
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
