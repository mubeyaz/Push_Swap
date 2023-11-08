/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:52:43 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/18 14:57:02 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	rule;
	char	*array;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	rule = ft_strlen(s + start);
	if (rule < len)
		len = rule;
	array = malloc(len + 1);
	if (!array)
		return (NULL);
	ft_strlcpy(array, s + start, len + 1);
	return (array);
}
