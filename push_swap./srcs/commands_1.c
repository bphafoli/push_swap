/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:53:51 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:20:30 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **stack_a, int p_bool)
{
	t_stack		*temp;
	t_stack		*next_temp;

	if (!*stack_a)
		return ;
	if ((*stack_a)->next != NULL)
	{
		temp = *stack_a;
		next_temp = (*stack_a)->next;
		temp->prev = next_temp;
		temp->next = next_temp->next;
		next_temp->prev = NULL;
		next_temp->next = temp;
		*stack_a = next_temp;
		if (p_bool)
			ft_putendl_fd("sa", 1);
	}
}

void	sb(t_stack **stack_b, int p_bool)
{
	t_stack		*temp;
	t_stack		*next_temp;

	if (!*stack_b)
		return ;
	if ((*stack_b)->next != NULL)
	{
		temp = *stack_b;
		next_temp = (*stack_b)->next;
		temp->prev = next_temp;
		temp->next = next_temp->next;
		next_temp->prev = NULL;
		next_temp->next = temp;
		*stack_b = next_temp;
		if (p_bool)
			ft_putendl_fd("sb", 1);
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b, int p_bool)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (p_bool)
		ft_putendl_fd("ss", 1);
}

void	pa(t_stack **stack_a, t_stack **stack_b, int p_bool)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	if (stack_b != NULL)
	{
		tmp = *stack_b;
		if ((*stack_b)->next)
			*stack_b = (*stack_b)->next;
		else
			*stack_b = NULL;
		if (*stack_b)
			(*stack_b)->prev = NULL;
		if (stack_a == NULL)
			stack_add_head(stack_a, tmp);
		else if (stack_a != NULL)
			stack_add_head(stack_a, tmp);
		if (p_bool)
			ft_putendl_fd("pa", 1);
	}
}

void	pb(t_stack **stack_a, t_stack **stack_b, int p_bool)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	if (stack_a != NULL)
	{
		tmp = *stack_a;
		if ((*stack_a)->next)
			*stack_a = (*stack_a)->next;
		else
			*stack_a = NULL;
		if (*stack_a)
			(*stack_a)->prev = NULL;
		if (stack_b == NULL)
			stack_add_head(stack_b, tmp);
		else if (stack_b != NULL)
			stack_add_head(stack_b, tmp);
		if (p_bool)
			ft_putendl_fd("pb", 1);
	}
}
