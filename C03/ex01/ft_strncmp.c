/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:44:57 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/15 18:13:44 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((unsigned)i < n)
        {
                if (s1[i] > s2[i])
                        return (1);
                else if (s1[i] < s2[i])
                        return (-1);
		i++;
        }
	return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int cmp1;
	int cmp2;
	int i;
	int to_return;

	cmp1 = 0;
	cmp2 = 0;
	i = 0;
	to_return = 0;
	while (s1[cmp1] != '\0')
		cmp1++;
	while (s2[cmp2] != '\0')
		cmp2++;
	if ((unsigned)cmp1 > n && (unsigned)cmp2 > n)
		to_return = ft_strcmp(s1, s2, n);
	else
	{
		if (cmp1 > cmp2)
                        return (1);
                else
                        return (-1);
	}
	return (to_return);


}
/*
int main(void)
{
	char str[100] = {"Hel"};
	char cou[100] = {"Hex"};
	str[0]='s';
	str[1]='A';
	str[2]='9';
	str[3]='U';
	str[4]='T';
	str[5]=' ';
	str[6]=' ';
	str[7]='O';
	str[8]='c';
	str[9]='U';
	str[10]='-';
	str[11]='s';
	str[12]='A';
	str[13]='M';
	str[14]='y';
int a=0;
	int	b=0;
	//for (int i =0; i < 15; i++)
	//	printf("%c",str[i]);
a = ft_strncmp(str,cou,5);
printf("%d\n",a);
b = strncmp(str,cou,5);
printf("%d\n",b);
}*\
