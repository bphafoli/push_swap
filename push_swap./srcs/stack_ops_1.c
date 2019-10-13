/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphafoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:04:47 by bphafoli          #+#    #+#             */
/*   Updated: 2019/09/23 14:33:56 by bphafoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack		*stack_init(char **av)
{
	t_stack	*head;
	t_stack	*node;
	int		i;

	i = 0;
	head = stack_create_node(ft_atoi(av[i]));
	i++;
	while (av[i])
	{
		node = stack_create_node(ft_atoi(av[i]));
		stack_add_tail(&head, node);
		i++;
	}
	return (head);
}

t_stack		*stack_create_node(int value)
{
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	if (node)
	{
		node->value = value;
		node->norm = -1;
		node->next = NULL;
		node->prev = NULL;
	}
	return (node);
}

void		stack_add_head(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
		return ;
	tmp = *head;
	if (tmp)
	{
		tmp->prev = node;
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
}

void		stack_add_tail(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
		return ;
	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
}

void		free_stack(t_stack **head)
{
	t_stack	*current;
	t_stack	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
