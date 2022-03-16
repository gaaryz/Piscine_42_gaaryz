/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:41:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 10:43:34 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		i++;
		if (to_find[j] == '\0')
			return (&str[i - j]);
	}
	return (NULL);
}
/*
int main(void)
{
	char str[100] = {"hihi"};
	char cou[100] = {"coucouhihiHex_@$^"};
		printf("%s",ft_strstr(cou,str));
		return(0);
}*/
