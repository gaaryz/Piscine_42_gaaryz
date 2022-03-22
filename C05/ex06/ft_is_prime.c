/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:02:56 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 21:35:13 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (i++ <= nb)
		if (nb % i == 0)
			ret++;
	if (ret == 2)
		return (1);
	return (0);
}
/*
int main()
{
	int a;
	a = ft_is_prime(98);
	printf("%d",a);
	return (0);
}*/
