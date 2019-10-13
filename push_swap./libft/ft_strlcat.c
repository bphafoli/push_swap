/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:44:13 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 16:14:22 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	while ((dst[dstlen] != '\0') && dstlen < dstsize)
		dstlen++;
	i = dstlen;
	while ((src[dstlen - i] != '\0') && (dstlen + 1 < dstsize))
	{
		dst[dstlen] = src[dstlen - i];
		dstlen++;
	}
	if (i < dstsize)
		dst[dstlen] = '\0';
	return (i + ft_strlen(src));
}
