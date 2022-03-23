/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:21:08 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:46:43 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	nbbb;
	unsigned int	sqrt;

	sqrt = 0;
	nbbb = 0;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	while (nbbb != (unsigned)nb && nbbb < (unsigned)nb)
	{
		sqrt++;
		nbbb = sqrt * sqrt;
	}
	if (nbbb != (unsigned)nb)
		return (0);
	return ((int)sqrt);
}
/*
int main()
{
	int a;
	a = ft_sqrt(686391705);
	printf("%d",a);
}*/
