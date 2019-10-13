/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:56:55 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:22:33 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **stack_a, int p_bool)
{
	t_stack	*first;
	t_stack	*last;

	if ((!*stack_a) || (stack_size(*stack_a) < 2))
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
	if (p_bool)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack **stack_b, int p_bool)
{
	t_stack	*first;
	t_stack	*last;

	if ((!*stack_b) || (stack_size(*stack_b) < 2))
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
	if (p_bool)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b, int p_bool)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (p_bool)
		ft_putendl_fd("rr", 1);
}

void	do_op(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (ft_strequ(str, "pa"))
		pa(stack_a, stack_b, 0);
	else if (ft_strequ(str, "pb"))
		pb(stack_a, stack_b, 0);
	else if (ft_strequ(str, "sa"))
		sa(stack_a, 0);
	else if (ft_strequ(str, "sb"))
		sb(stack_b, 0);
	else if (ft_strequ(str, "ra"))
		ra(stack_a, 0);
	else if (ft_strequ(str, "rb"))
		rb(stack_b, 0);
	else if (ft_strequ(str, "rra"))
		rra(stack_a, 0);
	else if (ft_strequ(str, "rrb"))
		rrb(stack_b, 0);
	else if (ft_strequ(str, "ss"))
		ss(stack_a, stack_b, 0);
	else if (ft_strequ(str, "rr"))
		rr(stack_a, stack_b, 0);
	else if (ft_strequ(str, "rrr"))
		rrr(stack_a, stack_b, 0);
}
