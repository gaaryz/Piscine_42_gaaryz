/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:31:37 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/19 11:18:05 by nzincenk         ###   ########.fr       */
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

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = size;
	while (*dest)
	{
		dest++;
		if (j > 0)
			j--;
	}
	while (*src && j > 1)
	{
		*dest++ = *src++;
		j--;
	}
	*dest = '\0';
	if (size > (unsigned)dest_len)
		return (dest_len + src_len);
	return (size + src_len);
}
/*
int main(void)
{
	char str[100] = {"123"};
	char cou[100] = {"123456"};
	int a =0;

	a = ft_strlcat(str,cou,15);
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
