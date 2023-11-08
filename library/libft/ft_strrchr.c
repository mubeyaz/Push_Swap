/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:52:52 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/18 14:56:59 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = NULL;
	while (1)
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (p);
}
