/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:31:17 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 15:33:12 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_neg(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i = 1;
	return (i);
}

static char	*check_min_int(char *minint)
{
	int		i;
	char	*min;

	i = 0;
	min = ft_strnew(11);
	while (i < 11)
	{
		min[i] = minint[i];
		i++;
	}
	return (min);
}

char		*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		i;
	char	*num;

	if (n == -2147483648)
		return (check_min_int(MININT));
	len = ft_intlen(n);
	neg = is_neg(n);
	i = len;
	if (!(num = ft_strnew(len)))
		return (NULL);
	if (neg == 1)
		n = n * -1;
	while (len > 0)
	{
		num[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		num[0] = '-';
	return (num);
}
