/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:35:56 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:31:40 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i++ <= nb / 2)
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
	return (nb);
}
/*
int main()
{
	int a;
	a = ft_find_next_prime(95);
	printf("%d",a);
}*/
