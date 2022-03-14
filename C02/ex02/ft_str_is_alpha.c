/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:22:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 11:50:21 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'A'))
			return (0);
		if (str[i] == 0)
			return (1);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int a;
	a = ft_str_is_alpha("coucou");
	printf("%d",a);
}*/
