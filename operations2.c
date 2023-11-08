/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:39:07 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/08 17:40:36 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *list)
{
	if (list->b_len != 0)
	{
		ft_up(list, 'a');
		list->a[0] = list->b[0];
		list->a_len++;
		ft_down(list, 'b');
		list->b_len--;
		ft_printf("pa\n");
	}
}

void	pb(t_list *list)
{
	if (list->a_len != 0)
	{
		ft_up(list, 'b');
		list->b[0] = list->a[0];
		list->b_len++;
		ft_down(list, 'a');
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
		ft_down(list, 'a');
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
		ft_down(list, 'b');
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
		ft_down(list, 'a');
		list->a[list->a_len - 1] = temp;
	}
	if (list->b_len != 0)
	{
		temp = list->b[0];
		ft_down(list, 'b');
		list->b[list->b_len - 1] = temp;
		ft_printf("rr\n");
	}
}