/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:12 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 16:23:09 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (char*)malloc(sizeof(*ptr) * (size + 1))))
		return (NULL);
	else
	{
		while (i < size)
		{
			ptr[i] = '\0';
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
