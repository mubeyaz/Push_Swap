/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:31:13 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/13 20:33:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    up(t_list *list, char c)
{
    int i;

    i = 0;
    if (c == 'a')
    {
        while (list->a_len >= i)
        {
            list->a[list->a_len - i + 1] = list->a[list->a_len - i];
            i++;
        }
    }
    else if (c == 'b')
    {
        while (list->b_len >= i)
        {
            list->b[list->b_len - i + 1] = list->b[list->b_len - i];
            i++;
        }
    }
}

void    down(t_list *list, char c)
{
    int i;

    i = 0;
    if (c == 'a')
    {
        while (list->a_len > i)
        {
            list->a[i] = list->a[i + 1];
            i++;
        }
    }
    else if (c == 'b')
    {
        while (list->b_len > i)
        {
            list->b[i] = list->b[i + 1];
            i++;
        }
    }
}

void    sa(t_list *list)
{
    int temp;

    if (list->a_len > 1)
    {
        temp = list->a[0];
        list->a[0] = list->a[1];
        list->a[1] = temp;
        ft_printf("sa\n");
    }
}

void    sb(t_list *list)
{
	int temp;

	if (list->b_len > 1)
	{
		temp = list->b[0];
		list->b[0] = list->b[1];
		list->b[1] = temp;
		ft_printf("sb\n");
	}
}

void    ss(t_list *list)
{
	int temp;

	if (list->a_len > 1)
	{
		temp = list->a[0];
		list->a[0] = list->a[1];
		list->a[1] = temp;
	}
	if (list->b_len > 1)
	{
		temp = list->b[0];
		list->b[0] = list->b[1];
		list->b[1] = temp;
		ft_printf("ss\n");
	}
}