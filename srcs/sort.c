/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:38 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/14 17:28:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fstart2(t_list *list)
{
	bmin(list);
	if (list->b_min_i < list->b_len / 2)
	{
		while (list->b_min_i != list->b_len - 1)
		{
			rb(list);
			bmin(list);
		}
	}
	else
	{
		while (list->b_min_i != list->b_len - 1)
		{
			rrb(list);
			bmin(list);
		}
	}
}

void	fsort(t_list *list)
{
	int	i;

	i = 0;
	list->steps = malloc(sizeof(int) * list->a_len + 1);
	pb(list);
	pb(list);
	while (i < list->a_len)
	{
		find_chepest(list);
		fstart(list);
	}
	fstart2(list);
	while (list->b_len > 0)
		pa(list);
	free(list->steps);
	free(list->a);
	free(list->b);
	free(list);
	exit(0);
}

void	ft_exit(char *message)
{
	ft_printf("%s\n", message);
	exit(1);
}
