/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:54:10 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 20:19:29 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*

int main(void)
{
	char str[100] = {"Hellfghjkgyiuwg"};
	char cou[100] = {"Hellonjf"};
	int a=0;
	int	b=0;
	//for (int i =0; i < 15; i++)
	//	printf("%c",str[i]);
a = ft_strcmp(str,cou);
printf("%d\n",a);
b = strcmp(str,cou);
printf("%d\n",b);
}*/
