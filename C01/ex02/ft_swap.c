/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:55 by ahaarij           #+#    #+#             */
/*   Updated: 2023/07/11 18:13:48 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a = 10;
	int	b = 20;

	printf("%d is A, %d is B\n", a, b);
	ft_swap(&a, &b);
	printf("%d is A, %d is B\n", a, b);
}
*/
