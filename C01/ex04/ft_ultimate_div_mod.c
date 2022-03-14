/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:19:17 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/11 13:29:44 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = aa / bb;
	*b = aa % bb;
}
/*
int main()
{
	int a=11;
	int b=10;
	ft_ultimate_div_mod(&a, &b);
}*/
