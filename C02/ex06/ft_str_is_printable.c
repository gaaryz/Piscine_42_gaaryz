/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:45:00 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 12:22:52 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	a = ft_str_is_printable("tfyguhijokWE*RG");
	printf("%d",a);
}*/
