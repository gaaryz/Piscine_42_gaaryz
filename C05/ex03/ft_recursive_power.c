/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:05:14 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:27:25 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power >= 1)
		ret = nb * ft_recursive_power(nb, power - 1);
	return (ret);
}
/*
int main()
{
	int	a;
	a = ft_recursive_power(-4, 2);
	printf("%d",a);
	return (0);
}*/
