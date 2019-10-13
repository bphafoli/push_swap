/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:36:02 by bphafoli            #+#    #+#             */
/*   Updated: 2019/09/23 14:36:36 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	normalize(t_stack **stacka)
{
	t_stack		*slow;
	t_stack		*fast;
	int			norm;

	slow = *stacka;
	while (slow)
	{
		norm = stack_size(*stacka);
		slow->norm = norm;
		fast = *stacka;
		while (fast)
		{
			if (slow->value < fast->value)
				slow->norm--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}

void	read_input(t_stack **a, t_stack **b, t_arguments args)
{
	char	*line;
	int		move;

	move = 0;
	while (get_next_line(0, &line))
	{
		if (err_ops(line))
		{
			do_op(a, b, line);
			move++;
			(args.v) ? (visualize(*a, *b)) : NULL;
			(args.p) ? ft_putendl_col_fd(GREEN, line, 1) : NULL;
			free(line);
		}
		else
			OP_FREE;
	}
	(args.c) ? (COUNT) : NULL;
}
