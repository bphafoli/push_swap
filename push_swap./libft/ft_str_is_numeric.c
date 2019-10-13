/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:40:34 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 16:05:38 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_numeric(const char *str)
{
	int	check;

	check = 0;
	while ((ft_isdigit(*str) || *str == '-') && *str)
	{
		if (*str == '-')
			check += 1;
		str++;
	}
	if (*str || check > 1)
		return (FALSE);
	return (TRUE);
}
