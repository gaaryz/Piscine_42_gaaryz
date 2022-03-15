/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:54:10 by nzincenk          #+#    #+#             */
/*   Updated: 2022/03/14 19:27:06 by nzincenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	unsigned char *p1 = (unsigned char *) s1;
	unsigned char *p2 = (unsigned char *) s2;
	unsigned char c1, c2;
	while (c1 == c2)
	{
		c1 = (unsigned char) *p1++;
		c2 = (unsigned char) *p2++;
		if (c1 == '\0')
			return (c1 - c2);
	}
	return (c1 - c2);
}

int main()
{
	int main()
{
	char str[100];
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


	for (int i =0; i < 15; i++)
		printf("%c",str[i]);


ft_strcmp();
}
