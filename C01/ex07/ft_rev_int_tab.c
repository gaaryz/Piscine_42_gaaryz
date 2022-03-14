/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:22:37 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/12 19:47:41 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i != size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
int main()
{
	int tab[6];
	tab[0]=1;
	tab[1]=2;
	tab[2]=3;
	tab[3]=4;
	tab[4]=5;
	tab[5]=6;
	
	ft_rev_int_tab(tab, 6);
	for (int i = 0; i<6; i++)
		printf("%d-",tab[i]);
}*/
