/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:01:40 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 10:41:40 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (unsigned)j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char str[100] = {"Hel"};
	char cou[100] = {"Hex_@$^"};



	*ft_strncat(str,cou,10);
	for (int i =0; i < 15; i++)
		printf("%c",str[i]);
printf("\n");
	char str2[100] = {"Hel"};
        char cou2[100] = {"Hex_@$^"};



        strncat(str2,cou2,10);
        for (int i =0; i < 15; i++)
                printf("%c",str2[i]);
}*/
