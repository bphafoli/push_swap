/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:57:43 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 15:21:14 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (n >= 0)
		i++;
	return (i);
}
