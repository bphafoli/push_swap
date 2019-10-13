/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:17:27 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 16:30:43 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white_space(char const *s)
{
	int		j;

	j = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j++;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		n;
	int		slen;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ((char*)s);
	i = is_white_space(s);
	n = 0;
	slen = ft_strlen(s) - 1;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[slen] == '\t' || s[slen] == '\n' || s[slen] == ' ')
		slen--;
	if (slen < 0)
		slen = 0;
	if (!(str = (char *)malloc(sizeof(char) * (slen - i) + 2)))
		return (NULL);
	while (i <= slen)
		str[n++] = s[i++];
	str[n] = '\0';
	return (str);
}
