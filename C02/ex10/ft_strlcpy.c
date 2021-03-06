/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:06:52 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/15 11:48:56 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cmp;

	i = 0;
	cmp = 0;
	if (size > 0)
	{
		while (src[cmp] != '\0')
			cmp ++;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (cmp);
}
/*
int main()
{
	char cou[100] = {0};
	char str[100] = {"10IZkTUqK"};
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
	int r =0;
	r = ft_strlcpy(cou,str,8);
	for (int i =0; i < 15; i++)
		printf("%c",cou[i]);
	printf("\n%d",r);

}*/
