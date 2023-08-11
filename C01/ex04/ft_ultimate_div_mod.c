/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:27:05 by ahaarij           #+#    #+#             */
/*   Updated: 2023/07/12 09:14:28 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a = 20;
	int	b = 10;
	int	div = 0;
	int	mod = 0;

	printf("%d is value of DIV and %d is the value of MOD\n", div, mod);
	ft_ultimate_div_mod(&a, &b);
	printf("%d is the value of A and %d is the value of B\n", a, b);
}
*/
