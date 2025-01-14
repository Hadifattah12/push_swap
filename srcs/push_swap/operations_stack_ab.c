/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_ab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:41:02 by hfattah           #+#    #+#             */
/*   Updated: 2024/08/08 13:22:53 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rr\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next || !b || !(*b)->next)
		return ;
	tmp = *a;
	(*a) = (*a)->next;
	tmp -> next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	(*b) = (*b)->next;
	tmp -> next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}

void	ft_rrr_sub(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		i++;
		*a = (*a)->next;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	ft_rrr_sub(b, j);
}
