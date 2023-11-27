/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:18 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/11/14 17:28:17 by marvin           ###   ########.fr       */
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

void	up(t_list *list, char c);
void	down(t_list *list, char c);
void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *list);
void	pa(t_list *list);
void	pb(t_list *list);
void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *list);
void	rra(t_list *list);
void	rrb(t_list *list);
void	rrr(t_list *list);
void	free_exit_l(t_list *list);
void	ft_exit_e(void);
void	bmax(t_list *list);
void	bmin(t_list *list);
int		a_min(t_list *list);
int		is_sorted(t_list *list);
int		is_dup(t_list *list);
void	check_args(t_list *list, char **av, int ac);
void	sort_two(t_list *list);
void	sort_three(t_list *list);
void	sort_four(t_list *list);
void	sort_five(t_list *list);
void	determine_sort(t_list *list, int argc);
void	fstart(t_list *list);
void	fstart_min1(t_list *list);
void	fstart_min2(t_list *list);
void	fstart_min3(t_list *list);
void	fstart2(t_list *list);
int		fstart_rrr(t_list *list, int take);
int		fstart_rrr_utils(t_list *list, int take);
int		fstart_rr(t_list *list, int take);
int		word_counter(char **str, char c);
int		ft_atoi2(char *str, t_list *list);
void	free_split(char **split);
int		take_split(t_list *list, char **split);
int		ft_start_rr_utils(t_list *list, int take);
void	fsort(t_list *list);
void	fsort(t_list *list);
void	calculate_steps(t_list *list);
void	take_chepest(t_list *list);
void	ft_exit(char *message);
void	calculate_steps(t_list *list);
void	take_chepest(t_list *list);
void	find_chepest(t_list *list);
void	ft_check_errors(t_list *list, size_t result, char c);
void	fstart_2(t_list *list);

#endif
