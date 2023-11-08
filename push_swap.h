/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:38:20 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/08 17:57:16 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "../library/printf/ft_printf.h"
# include "../library/libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int	*a;
	int	*b;
	int	*steps;
	int	a_len;
	int	boole1;
	int	boole2;
	int	i;
	int	j;
	int	b_max_i;
	int	b_min_i;
	int	a_min_i;
	int	chepest_index;
	int	b_len;
}		t_list;

void	set_a_b(t_list *list,int ac);
int 	take_args(t_list *list,char **av,int ac);
void	free_exit_l(t_list *list);
void	check_args(t_list *list, char **av, int ac);
int		word_counter(char **str,char c);
void	free_split(char **split);
void	ft_check_errors(t_list *list, size_t result, char c);
int		ft_atoi2(char *str, t_list *list);
int		take_split(t_list *list,char **split);
void	ft_exit_e(void);
void	sort_two(t_list *list);
void	sort_three(t_list *list);
void	sort_four(t_list *list);
void	sort_five(t_list *list);
void	determine_sort(t_list *list, int argc);
int		is_dup(t_list *list);

#endif