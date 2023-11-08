/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:10:52 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/08 13:34:02 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    set_a_b(t_list *list,int ac)
{
    list->a = malloc(sizeof(int) * ac + 1);
    list->b = malloc(sizeof(int) * ac + 1);
}

int take_args(t_list *list,char **av,int ac)
{
    int i;
    char *str;
    char **split;

    check_args(list,av,ac);
    
    str = ft_strdup("");
    str[0] = "\0";
    
    list->a_len = 0;
    i = 0;
    
    while(ac - 1 > i)
    {
        str = ft_strjoin(str,av[i+1]);
        str = ft_strjoin(str," ");
        i++;
    }
    set_a_b(list,word_counter(av,' '));
    split = ft_split(str,' ');
    i = take_split(list,split);
    free(str);
    free_split(split);
    return(i + 1);

}

int main(int ac,char **av)
{
    t_list  *list;

    if (ac >= 2)
    {
        list = malloc(sizeof(t_list));
        list->a_len = 0;
        list->b_len = 0;
        ac = take_args(list,av,ac);
        is_dup(list);
		if (is_sorted(list))
		{
			free(list->a);
			free(list->b);
			free(list);
			return (0);
		}
		if (ac <= 6)
			determine_sort(list, ac);
		else
			fsort(list);
        
    }
    return (0);
}
