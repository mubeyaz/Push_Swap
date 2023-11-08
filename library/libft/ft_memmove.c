/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:43:35 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/18 14:56:26 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc < dstc)
	{
		while (len--)
			dstc[len] = srcc[len];
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dst);
}
