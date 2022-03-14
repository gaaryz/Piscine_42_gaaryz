/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:13:22 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/12 19:49:16 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab [j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
        int tab[6];
        tab[0]=7;
        tab[1]=5;
        tab[2]=2;
        tab[3]=8;
        tab[4]=3;
        tab[5]=69;

        ft_sort_int_tab(tab, 5);
        for (int i = 0; i<6; i++)
                pr("%d-",tab[i]);
}*/
