/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:37:42 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/18 14:56:16 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numbercount(int n)
{
	int	count;

	count = 0;
	if (n > 0)
		count = 0;
	else if (n < 0 || n == 0)
		count = 1;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	itoa_next(int n1)
{
	char	convert1[1];

	if (n1 == 0)
		convert1[0] = '-';
	if (n1 < 0)
	{
		convert1[0] = -(n1 % 10) + '0';
	}
	else if (n1 > 0)
	{
		convert1[0] = (n1 % 10) + '0';
	}
	return (*convert1);
}

char	*ft_itoa(int n)
{
	char	*convert;
	int		len;
	int		rule;

	len = numbercount(n);
	convert = malloc(sizeof (char) * len + 1);
	if (!convert)
		return (NULL);
	if (n == 0)
	{
		convert[0] = '0';
		convert[len] = '\0';
		return (convert);
	}
	convert[len] = '\0';
	rule = numbercount(n);
	while (rule-- != 0)
	{
		convert[len-- - 1] = itoa_next(n);
		n = (n / 10);
	}
	return (convert);
}
