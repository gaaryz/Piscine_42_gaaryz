/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:08:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:23:46 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ret;
	int	tmp;

	ret = nb;
	tmp = power;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power > 0)
		return (1);
	while (tmp > 1)
	{
		ret = ret * nb;
		tmp--;
	}
	return (ret);
}
/*
int main()
{
	int	a;
	a = ft_iterative_power(-2, 2);
	printf("%d",a);
	return (0);
}*/
