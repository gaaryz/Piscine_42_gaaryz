/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:40:50 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 16:32:18 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb == 0)
		return (ret);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			ret = ret * nb;
			nb--;
		}
		return (ret);
	}
}
/*
int main()
{
	int a;
	a = ft_iterative_factorial(6);
	printf("return = %d\n",a);
	return (0);
}*/
