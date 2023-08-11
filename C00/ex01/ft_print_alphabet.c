/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:58:03 by ahaarij           #+#    #+#             */
/*   Updated: 2023/08/12 00:49:32 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;				// 97 is the ASCII value for a. You could also write i = 'a'
	while (i <= 122)	// 122 is the ASCII value for z. You could also write i <= 'z'
	{
		write(1, &i, 1);
		i++;
	}
}
