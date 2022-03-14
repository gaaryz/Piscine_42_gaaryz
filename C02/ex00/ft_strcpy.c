/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:01:36 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 11:52:14 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int main()
{
	char cou[100] = {0};
	char str[100];
	str[0]='t';
	str[1]='E';
	str[2]='u';
	str[3]='B';
	str[4]=' ';
	str[5]=' ';
	str[6]='c';
	str[7]='O';
	str[8]='c';
	str[9]='U';
	str[10]='-';
	str[11]='s';
	str[12]='A';
	str[13]='M';
	str[14]='y';

	*ft_strcpy(cou,str);
	for (int i =0; i < 15; i++)
		printf("%c",str[i]);

}*/
