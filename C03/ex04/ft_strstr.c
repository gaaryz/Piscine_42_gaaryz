/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:41:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/17 11:08:22 by nzincenk         ###   ########.fr       */
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
		{
			if (str[i + 1] == to_find[j + 1] || to_find[j + 1] == '\0')
				j++;
		}
		i++;
		if (to_find[j] == '\0')
			return (&str[i - j]);
	}
	return (NULL);
}
/*
int main(void)
{
	char str[100] = {"hrirhri"};
	char cou[100] = {"coucouhrirhriHex_@$^"};
		printf("%s",ft_strstr(cou,str));
		return(0);
}*/
