/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:47 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/22 16:19:57 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	val;
	int	signe;

	signe = 1;
	val = 0;
	while ((*str > 10 && *str < 16) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe = signe * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	val = val * signe;
	return (val);
}
/*
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
}*/
