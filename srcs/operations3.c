/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:41:13 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/13 18:36:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[list->a_len - 1];
		up(list, 'a');
		list->a[0] = temp;
		ft_printf("rra\n");
	}
}

void	rrb(t_list *list)
{
	int	temp;

	if (list->b_len != 0)
	{
		temp = list->b[list->b_len - 1];
		up(list, 'b');
		list->b[0] = temp;
		ft_printf("rrb\n");
	}
}

void	rrr(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[list->a_len - 1];
		up(list, 'a');
		list->a[0] = temp;
	}
	if (list->b_len != 0)
	{
		temp = list->b[list->b_len - 1];
		up(list, 'b');
		list->b[0] = temp;
	}
	ft_printf("rrr\n");
}
