/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:11:32 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/23 18:28:35 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else if (index < 0)
		return (-1);
	nb = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (nb);
}
/*
int main()
{
	int a;
	a = ft_fibonacci(6);
	printf("%d",a);
}*/
