/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:05:14 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 15:40:04 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*nl_head;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(new_list = ft_lstnew(NULL, 0)))
		return (NULL);
	new_list = f(lst);
	nl_head = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_list->next = f(lst);
		new_list = new_list->next;
	}
	return (nl_head);
}
