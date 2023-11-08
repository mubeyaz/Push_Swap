/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/07/24 17:06:52 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/24 17:06:54 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	control(char c, va_list ap)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += print_char(va_arg(ap, int));
	else if (c == 's')
		ret += print_string(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		ret += print_signedint(va_arg(ap, int));
	else if (c == 'u')
		ret += print_unsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		ret += print_hex(va_arg(ap, unsigned int));
	else if (c == 'X')
		ret += print_upperhex(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		ret += print_string("0x");
		ret += print_pointer(va_arg(ap, unsigned long));
	}
	else if (c == '%')
		ret += print_char('%');
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	int		i;
	va_list	ap;

	ret = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret += control(str[i], ap);
		}
		else
			ret += print_char(str[i]);
		i++;
	}
	return (ret);
}
/*
int	main(void)
{
		int c = 1233123;
	ft_printf("%x\n", c);
	ft_printf("%X\n", c);
	printf("%X",c);
}
*/