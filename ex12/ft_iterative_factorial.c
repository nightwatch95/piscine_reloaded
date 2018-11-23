/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:36:58 by vjacks            #+#    #+#             */
/*   Updated: 2018/11/23 17:36:31 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		i = nb;
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
	}
	return (nb);
}
