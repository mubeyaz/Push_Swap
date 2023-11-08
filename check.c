/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:10:42 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/08 17:53:12 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit_l(t_list *list)
{
	free(list);
	ft_exit_e();
}

int	is_sorted(t_list *list)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < list->a_len - 1)
	{
		if (list->a[i] > list->a[i + 1])
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

void    check_args(t_list *list, char **av, int ac)
{
	int	x;

	list->i = 0;
	list->j = 0;
	while (ac > ++list->i)
	{
		x = 1;
		while (av[list->i][list->j])
		{
			if (av[list->i][list->j] != ' ')
			{
				x = 0;
				if (av[list->i][list->j] == '+' || av[list->i][list->j] == '-')
					list->j++;
				if (!ft_isdigit(av[list->i][list->j]))
				{
					free_exit_l(list);
				}
			}
			list->j++;
		}
		if (x)
		{
			free_exit_l(list);
		}
		list->j = 0;
	}
}

int	is_dup(t_list *list)
{
	int	i;
	int	index;
	int	count;

	i = 0;
	while (i < list->a_len)
	{
		index = 0;
		count = 0;
		while (index < list->a_len)
		{
			if (list->a[i] == list->a[index])
				count++;
			index++;
		}
		if (count > 1)
		{
			free(list->a);
			free(list->b);
			free(list);
			ft_exit_e();
		}
		i++;
	}
	return (0);
}