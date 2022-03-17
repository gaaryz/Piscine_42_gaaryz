/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:47 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/17 20:19:39 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int	nb;

	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			nb++;
		else if (str[i] >= '0' && str[i] <= '9')
			while (str[i] >= '0' && str[i] <= '9')
			{

				while ()
			{
	return (un int !);
}

int main( int argc, char *argv[] )
{
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

   ft_atoi(argv[1]);
}
