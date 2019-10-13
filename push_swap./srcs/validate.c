/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/09/23 14:38:11 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	validate(int ac, char **av, int check)
{
	int	i;
	int	ret;

	i = 0;
	while (av[i])
	{
		if (!(ret = err_input(av[i])))
		{
			CHECK;
			error_out(INPUT);
		}
		ret = err_int(av[i]);
		if (ret == MAXSIZE || ret == MINSIZE)
		{
			CHECK;
			error_out(ret);
		}
		i++;
	}
	if (!(ret = err_duplicate(ac, av)))
	{
		CHECK;
		error_out(DUPE);
	}
}

int		is_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int		check_sorted(t_stack *stack_a)
{
	t_stack	*node;
	int		temp;

	if (!stack_a)
		return (FEELSBADMAN);
	node = stack_a;
	while (node->next)
	{
		temp = node->value;
		node = node->next;
		if (temp > node->value)
			return (FEELSBADMAN);
	}
	return (FEELSGOODMAN);
}

int		stack_size(t_stack *head)
{
	int		i;
	t_stack	*list;

	if (!head)
		return (0);
	list = head;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

int		arr_size(char **array)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (array[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}
