/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_col_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:29:45 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 15:53:47 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_col_fd(char *colour, int c, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putchar_fd(c, fd);
	ft_putstr_fd(RESET, fd);
}
