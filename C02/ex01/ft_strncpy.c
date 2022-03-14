/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:17:49 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 12:01:55 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;
	int	i;

	i = 0;
	x = 0;
	while (x < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		x++;
	}
	return (dest);
}
/*
int main(void)
{
	char t[6]={0};
	ft_strncpy(t, "hello", 3);
	printf("%s",t);
}*/
