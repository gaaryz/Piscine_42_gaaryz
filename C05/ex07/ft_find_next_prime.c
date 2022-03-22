/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:35:56 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 21:44:01 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (i++ <= nb)
		if (nb % i == 0)
			ret++;
	if (ret == 2)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*
int main()
{
	int a;
	a = ft_find_next_prime(90);
	printf("%d",a);
}*/
