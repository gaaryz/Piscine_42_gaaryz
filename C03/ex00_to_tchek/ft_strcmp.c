/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:54:10 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/15 16:20:44 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int	c1;
	int	c2;
	int	i;

	c1 = 0;
	c2 = 0;
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	if (c1 == c2)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (c1 - i - c2);
			i++;
		}
	}
	else
		return (c1 - c2);

}

int main(void)
{
	char str[100] = {"Hellocxucou"};
	char cou[100] = {"Hellocoucou"};
/*	str[0]='s';
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

*/int a=0;
	//for (int i =0; i < 15; i++)
	//	printf("%c",str[i]);
a = ft_strcmp(str,cou);
printf("%d",a);
}
