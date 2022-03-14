/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:04:40 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 12:39:11 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}	
	return (str);
}
/*
int main()
{
	//char cou[100] = {0};
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

char	cou[100];
       cou[100]	= *ft_strupcase(str);
	for (int i =0; i < 15; i++)
		printf("%c",cou[i]);

}*/
