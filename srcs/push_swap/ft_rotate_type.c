/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:40:22 by hfattah           #+#    #+#             */
/*   Updated: 2024/08/13 17:06:50 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->nbr))
			i = ft_case_rarb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_a(a, b, tmp->nbr))
			i = ft_case_rrarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rarrb_a(a, b, tmp->nbr))
			i = ft_case_rarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarb_a(a, b, tmp->nbr))
			i = ft_case_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->nbr))
			i = ft_case_rarb(a, b, tmp->nbr);
		if (i > ft_case_rrarrb(a, b, tmp->nbr))
			i = ft_case_rrarrb(a, b, tmp->nbr);
		if (i > ft_case_rarrb(a, b, tmp->nbr))
			i = ft_case_rarrb(a, b, tmp->nbr);
		if (i > ft_case_rrarb(a, b, tmp->nbr))
			i = ft_case_rrarb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
