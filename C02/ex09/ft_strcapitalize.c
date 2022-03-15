/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:21:12 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/15 10:37:50 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_tr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			if ((str[i - 1] < 'A' && str[i - 1] > '9')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| (str[i - 1] > 'z') || str[i - 1] < '0')
				str[i] = str[i] - 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	ft_tr(str);
	return (str);
}
/*
int main()
{
	char str[100] = {"8sqrk5lw7|s y f,i]]x>!ip *f"};
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
	
	*ft_strcapitalize(str);
	for (int i =0; i < 50; i++)
		printf("%c",str[i]);

}*/
