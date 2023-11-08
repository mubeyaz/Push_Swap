/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:47:13 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/25 19:37:02 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
	ft_putchar_fd('\n', fd);
}

int main()
{
	char *s = "Muhammed";
	int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putendl_fd(s,fd);
}