/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:07:01 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:06:43 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_master(t_stack **stack_a, t_stack **stack_b)
{
	int		size_a;

	size_a = stack_size(*stack_a);
	if (size_a == 2)
		sort_2(stack_a);
	else if (size_a == 3)
		sort_3(stack_a);
	else if (size_a > 3 && size_a <= 5)
		sort_5(stack_a, stack_b);
	else if (size_a > 5 && size_a <= 20)
		sort_20(stack_a, stack_b);
	else if (size_a > 20 && size_a <= 50)
		sort_50(stack_a, stack_b);
	else if (size_a > 50 && size_a <= 105)
		sort_100(stack_a, stack_b);
	else if (size_a > 105 && size_a <= 250)
		sort_250(stack_a, stack_b);
	else if (size_a > 250 && size_a <= 505)
		sort_500(stack_a, stack_b);
	else
		sort_me(stack_a, stack_b);
}

void	sort_2(t_stack **stack_a)
{
	t_stack	*node;

	node = *stack_a;
	if (node->value > node->next->value)
		sa(stack_a, 1);
}

void	sort_3(t_stack **stack_a)
{
	t_stack	*node;
	int		l1;
	int		l2;
	int		l3;

	node = *stack_a;
	l1 = node->value;
	l2 = node->next->value;
	l3 = node->next->next->value;
	if (l1 > l2 && l1 > l3 && l3 < l2)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (l1 < l2 && l2 > l3 && l3 > l1)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (l1 > l2 && l1 < l3 && l3 > l2)
		sa(stack_a, 1);
	else if (l1 > l3 && l3 > l2 && l1 > l2)
		ra(stack_a, 1);
	else if (l3 < l1 && l3 < l2 && l1 < l2)
		rra(stack_a, 1);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	pos;
	int	i;

	size = stack_size(*stack_a);
	i = 0;
	while (i < (size - 3))
	{
		pos = find_nsmallest_pos(stack_a, (i + 1));
		ra_rra_x_times(stack_a, pos);
		pb(stack_a, stack_b, 1);
		i++;
	}
	sort_3(stack_a);
	while (i > 0)
	{
		pa(stack_a, stack_b, 1);
		i--;
	}
}

void	sort_20(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 5;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= range_max)
			{
				pb(stack_a, stack_b, 1);
				i++;
			}
			else
				ra(stack_a, 1);
		}
	}
	i--;
	pushback_b(stack_a, stack_b, i, range_max);
}
