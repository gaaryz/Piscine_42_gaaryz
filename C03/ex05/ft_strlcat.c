/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:31:37 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/17 19:28:20 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	src_len;
	int	dest_len;
	int	j;
	int	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
		if ((unsigned)j == size - 1)
			break ;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len);
}
/*
int main(void)
{
	char str[100] = {"123"};
	char cou[100] = {"123456"};
	int a =0;

	a = ft_strlcat(str,cou,10);
	for (int i =0; i < 15; i++)
		printf("%c",str[i]);
printf("\n");
printf("%d",a);
	char str2[100] = {"Hel"};
        char cou2[100] = {"Hex_@$^"};



        strlcat(str2,cou2,10);
        for (int i =0; i < 15; i++)
                printf("%c",str2[i]);
}*/
