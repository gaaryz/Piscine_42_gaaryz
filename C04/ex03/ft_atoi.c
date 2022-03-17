/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:47 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/16 19:15:32 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int	i;
	int	minus;
	i=0;
	minus = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minus++;
	}
	if (minus %2 == 0)

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
