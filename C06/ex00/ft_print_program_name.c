/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:42:44 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/21 19:59:03 by nzincenk         ###   ########.fr       */
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
	ft_putstr(argv[0]);
	ft_putstr('\n');
	return (0);
}
