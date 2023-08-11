/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:13:49 by ahaarij           #+#    #+#             */
/*   Updated: 2023/08/12 00:39:14 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)				// This checks if n is greater than or equal to 0
	{
		write(1, "P", 1);	// If n IS greater than or equal to 0, it will execute this line.
	}
	else
	{
		write(1, "N", 1);	// If n IS NOT greater than or equal to 0, it will execute this line.
	}
}
