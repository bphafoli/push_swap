/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 08:36:50 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:13:04 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_largest(t_stack **head)
{
	t_stack	*node;
	int		largest;

	node = *head;
	largest = 0;
	while (node)
	{
		if (node->value > largest)
			largest = node->value;
		node = node->next;
	}
	return (largest);
}

int		find_largest_pos(t_stack **head, int largest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->value == largest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

int		find_smallest(t_stack **head)
{
	t_stack	*node;
	int		smallest;

	node = *head;
	smallest = node->value;
	while (node)
	{
		if (node->value <= smallest)
			smallest = node->value;
		node = node->next;
	}
	return (smallest);
}

int		find_smallest_pos(t_stack **head, int smallest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->value == smallest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

int		find_nsmallest_pos(t_stack **head, int smallest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->norm == smallest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}
