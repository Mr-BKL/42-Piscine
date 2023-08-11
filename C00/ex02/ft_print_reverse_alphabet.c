/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:07:31 by ahaarij           #+#    #+#             */
/*   Updated: 2023/08/12 00:37:53 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;			// 122 is the ASCII value for z. You could also write i = 'z'
	while (i >= 97)		// 97 is the ASCII value for a. You could also write i >= 'a'
	{
		write(1, &i, 1);
		i--;
	}
}
