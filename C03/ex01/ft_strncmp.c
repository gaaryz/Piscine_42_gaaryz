/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:44:57 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/17 10:55:43 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && (unsigned)i < n)
		|| (s2[i] != '\0' && (unsigned)i < n))
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
a = ft_strncmp(str,cou,4);
printf("%d\n",a);
b = strncmp(str,cou,4);
printf("%d\n",b);
}*/
