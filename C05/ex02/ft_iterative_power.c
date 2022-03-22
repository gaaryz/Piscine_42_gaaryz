/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:08:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 18:07:08 by nzincenk         ###   ########.fr       */
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
	else if (nb == 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (tmp > 1)
	{
		ret = ret * nb;
		tmp--;
	}
	if (nb < 0 && power % 2 != 0)
		return (ret * -1);
	else
		return (ret);
}
/*
int main()
{
	int	a;
	a = ft_iterative_power(5, 9);
	printf("%d",a);
	return (0);
}*/
