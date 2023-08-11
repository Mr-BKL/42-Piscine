/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:14:39 by ahaarij           #+#    #+#             */
/*   Updated: 2023/07/12 09:13:51 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 20;
	int	b = 10;
	int	div = 0;
	int	mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("%d is a, %d is b\n", a, b);
	printf("%d is div, %d is mod\n", div, mod);
}
*/
