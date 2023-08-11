/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:28:12 by ahaarij           #+#    #+#             */
/*   Updated: 2023/08/12 00:39:22 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	comb(char a, char b, char c)
{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	putchar(',');
	putchar(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
 }
