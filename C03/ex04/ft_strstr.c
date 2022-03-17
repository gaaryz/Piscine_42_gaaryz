/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:41:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/17 21:47:02 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		j = 0;
		 printf("coucou je renitialise i = %d \n",i);
		while (str[i] == to_find[j] && str[i + 1] == to_find[j + 1])
		{
			printf("coucou str[%d] = %d dest[%d] = %d\n",i,str[i],j,to_find[j]);
			printf("coucou str[+1 =%d] = %d dest[+1 =%d] = %d\n",i+1,str[i+1],j+1,to_find[j+1]);
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
				//RENITIALISER i A SA VAL SI ERREUR DNS BOUCLE !
		}
		/*if (str[i] == to_find[j])
		{
			if (str[i + 1] == to_find[j + 1] || to_find[j + 1] == '\0')
				j++;
		}
		i++;
		if (to_find[j] == '\0')
			return (&str[i - j]);*/
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[100] = {"testy"};
	char cou[100] = {"tescoutesty"};
		printf("%s",ft_strstr(cou,str));
		return(0);
}
