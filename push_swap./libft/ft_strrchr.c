/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:41 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 16:25:17 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (ft_strlen(s));
	while (i >= 0 && s[i] != c)
		i--;
	if (!(s[i] == c))
		return (NULL);
	else
		return ((char*)&s[i]);
}
