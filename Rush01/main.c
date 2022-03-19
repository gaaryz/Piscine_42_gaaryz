/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:53:09 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/19 12:00:28 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(int	argc, char	**argv)
{
	if (argc - 1 > 1)
		return (0);
	for (int i =0; i < 4; i =+ 4)
	{
		printf("%c\n",argv[i]);
		printf("%c\n",argv[i+1]);
		printf("%c\n",argv[i+2]);
		printf("%c\n",argv[i+3]);
		printf("\n");
	}

}
