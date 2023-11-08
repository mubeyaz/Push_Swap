/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:58:51 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/08 17:59:06 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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