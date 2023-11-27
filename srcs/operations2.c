/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:05 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/14 17:28:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *list)
{
	if (list->b_len != 0)
	{
		up(list, 'a');
		list->a[0] = list->b[0];
		list->a_len++;
		down(list, 'b');
		list->b_len--;
		ft_printf("pa\n");
	}
}

void	pb(t_list *list)
{
	if (list->a_len != 0)
	{
		up(list, 'b');
		list->b[0] = list->a[0];
		list->b_len++;
		down(list, 'a');
		list->a_len--;
		ft_printf("pb\n");
	}
}

void	ra(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[0];
		down(list, 'a');
		list->a[list->a_len - 1] = temp;
		ft_printf("ra\n");
	}
}

void	rb(t_list *list)
{
	int	temp;

	if (list->b_len != 0)
	{
		temp = list->b[0];
		down(list, 'b');
		list->b[list->b_len - 1] = temp;
		ft_printf("rb\n");
	}
}

void	rr(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[0];
		down(list, 'a');
		list->a[list->a_len - 1] = temp;
	}
	if (list->b_len != 0)
	{
		temp = list->b[0];
		down(list, 'b');
		list->b[list->b_len - 1] = temp;
		ft_printf("rr\n");
	}
}
