/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:17:49 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/15 12:02:22 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((unsigned)i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned)i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char t[100]={0};
	ft_strncpy(t, "hello", 9);
	printf("%s",t);
}*/
