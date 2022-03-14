/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:39:20 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 12:14:27 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		else if (str[i] == 0)
			return (1);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int a;
	a = ft_str_is_lowercase("qwertyQui");
	printf("%d",a);
}*/
