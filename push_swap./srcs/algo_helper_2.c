/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:50:05 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:15:33 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra_rra_x_times(t_stack **head, int pos)
{
	int		stacksize;

	stacksize = stack_size(*head);
	if (pos > stacksize / 2)
	{
		pos = stacksize - pos;
		while (pos != 0)
		{
			rra(head, 1);
			pos--;
		}
	}
	else if (pos <= stacksize / 2)
	{
		while (pos != 0)
		{
			ra(head, 1);
			pos--;
		}
	}
}

void	rb_rrb_x_times(t_stack **head, int pos)
{
	int		stacksize;

	stacksize = stack_size(*head);
	if (pos > stacksize / 2)
	{
		pos = stacksize - pos;
		while (pos != 0)
		{
			rrb(head, 1);
			pos--;
		}
	}
	else if (pos <= stacksize / 2)
	{
		while (pos != 0)
		{
			rb(head, 1);
			pos--;
		}
	}
}

void	pushback_b(t_stack **stack_a, t_stack **stack_b, int i, int range_max)
{
	int		pos;

	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 5)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 5;
	}
}

int		find_nlargest_pos(t_stack **head, int largest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->norm == largest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}
