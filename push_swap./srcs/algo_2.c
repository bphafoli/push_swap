/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:30:01 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:08:24 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_me(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 50;
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

void	sort_100(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 17;
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

void	sort_250(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 30;
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

void	sort_500(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 44;
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

void	sort_50(t_stack **stack_a, t_stack **stack_b)
{
	int		range_max;
	int		i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 13;
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
