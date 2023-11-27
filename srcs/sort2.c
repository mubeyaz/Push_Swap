/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:46 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/14 17:28:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list *list)
{
	if (list->a[0] > list->a[1])
		sa(list);
}

void	sort_three(t_list *list)
{
	if (list->a[0] < list->a[1] && list->a[1] < list->a[2])
		return ;
	if (list->a[0] < list->a[1])
	{
		if (list->a[0] > list->a[2])
			rra(list);
		else
		{
			rra(list);
			sa(list);
		}
	}
	else
	{
		if (list->a[0] < list->a[2])
			sa(list);
		else if (list->a[1] < list->a[2])
			ra(list);
		else
		{
			sa(list);
			rra(list);
		}
	}
}

void	sort_five(t_list *list)
{
	while (a_min(list) != 0)
	{
		if (a_min(list) >= 2)
			rra(list);
		else
			ra(list);
	}
	pb(list);
	sort_four(list);
	pa(list);
}

void	sort_four(t_list *list)
{
	while (a_min(list) != 0)
	{
		if (a_min(list) == 1)
			ra(list);
		else if (a_min(list) == 2)
			rra(list);
		else if (a_min(list) == 3)
			rra(list);
	}
	pb(list);
	sort_three(list);
	pa(list);
}

void	determine_sort(t_list *list, int argc)
{
	if (argc == 3)
		sort_two(list);
	else if (argc == 4)
		sort_three(list);
	else if (argc == 5)
		sort_four(list);
	else if (argc == 6)
		sort_five(list);
	free(list->b);
	free(list->a);
	free(list);
	exit(0);
}
