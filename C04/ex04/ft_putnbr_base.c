/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:25:32 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 14:29:39 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (!str++)
		ft_putchar(*str)
}

int	ft_recur(int nbr, int *tab)
{
	nbr = nbr % 10; 
	nbr = nbr / 10;
	if (nbr / 10 != 0 && nbr % 10 != 0)
		*tab = ft_recur(nbr++, tab++)
	return (tab);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	base_l;
	int	nbr_l;
	int	*nb;
	int	ret;

	base_l = 0;
	nbr_l = 0;
	while (!base)
		base_l++;
	nb = ft_recur(nbr, nb);
	while (!nb)
	{
		ret = ret * base_l
	}
	/*pow base_l-1*/
	ft_putchar(ret);
}
////////////////////////////////////////////////////////////
void ft_putnbr_base(int nbr, char *base)
{

	ft_putnb(nb +; size_base);//pour lafichage du nb convertit et verif si caractere est dns la base.

}
