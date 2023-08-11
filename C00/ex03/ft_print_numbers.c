/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:11:22 by ahaarij           #+#    #+#             */
/*   Updated: 2023/08/12 00:37:46 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;				// 48 is the ASCII value for 0. You could also write i = '0'
	while (i <= 57)		// 57 is the ASCII value for 9. You could also write i <= '9'
	{
		write(1, &i, 1);
		i++;
	}
}
