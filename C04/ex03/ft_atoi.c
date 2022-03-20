/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:47 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 17:30:34 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(char *str)
{
	int	nb;
	int	nb_minus;
	int	i;

	nb_minus = 0;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			nb_minus++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				nb = nb * 10 + (str[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}
	return (nb);
/////////////////////////////////////////////////////////////////////////////////
	while (*str)
	{
		while (*str == '-' || *str == '+')
		{
			str++;
		}
		str++;
	}

	while (*str >= '0' && *str <= '9')
        {
        	nb = nb * 10 + (*str - '0');
        }
        if (*str < '0' && *str > '9')
        	return (nb);
//////////////////////////////////////////////////////////////////////////////////////////






}

int main( int argc, char **argv)
{
	int a;
	printf("Program name %s\n", argv[0]);

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }

   a = ft_atoi(argv[1]);
   printf("%d\n",a);
}
