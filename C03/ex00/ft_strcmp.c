/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:54:10 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 10:25:59 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_compt(char *s)
{
	int	cmp;

	cmp = 0;
	while (s[cmp] != '\0')
	{
		cmp++;
	}
	return (cmp);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp1;
	int	cmp2;
	int	i;

	cmp1 = ft_compt(s1);
	cmp2 = ft_compt(s2);
	i = 0;
	if (cmp1 != cmp2)
	{
		if (cmp1 > cmp2)
			return (1);
		else
			return (-1);
	}
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[100] = {"Helloo"};
	char cou[100] = {"Hello"};
	str[0]='s';
	str[1]='A';
	str[2]='9';
	str[3]='U';
	str[4]='T';
	str[5]=' ';
	str[6]=' ';
	str[7]='O';
	str[8]='c';
	str[9]='U';
	str[10]='-';
	str[11]='s';
	str[12]='A';
	str[13]='M';
	str[14]='y';

	int a=0;
	int	b=0;
	//for (int i =0; i < 15; i++)
	//	printf("%c",str[i]);
a = ft_strcmp(str,cou);
printf("%d\n",a);
b = strcmp(str,cou);
printf("%d\n",b);
}*/
