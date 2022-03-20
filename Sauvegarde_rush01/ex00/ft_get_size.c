/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:00:00 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/20 22:46:18 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validate(char *str, int size)
{
	int	n;

	n = 4 * size;
	while (n--)
	{
		if (*str < '1' || *str > size + '0')
		{
			return (0);
		}
		str += 2;
	}
	return (size);
}

int	ft_get_size_and_validate(char *str)
{
	int	num_of_args;
	int	i;

	num_of_args = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			num_of_args++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	if (num_of_args % 4 != 0 || num_of_args > 9 * 4)
		return (0);
	return (ft_validate(str, num_of_args / 4));
}
