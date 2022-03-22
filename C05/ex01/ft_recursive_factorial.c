/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:22:29 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 17:07:29 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb > 1)
		ret = nb * ft_recursive_factorial(nb - 1);
	return (ret);
}
/*
int main()
{
	int a;
	a = ft_recursive_factorial(6);

	printf("%d",a);
        return (0);
}*/
