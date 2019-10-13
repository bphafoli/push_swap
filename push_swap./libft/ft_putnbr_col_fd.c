/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_col_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:32:02 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 15:59:12 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_col_fd(char *colour, int nbr, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putnbr_fd(nbr, fd);
	ft_putstr_fd(RESET, fd);
}
