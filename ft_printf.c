/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:03:02 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/27 11:15:05 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	check_type(char z)
{
	char	*s_type;
	int		i;

	i = 0;
	s_type = "cspdiuxX%";
	while (s_type[i])
	{
		if (z == s_type[i])
			return (1);
		i++;
	}
	return (0);
}

int	print_printf(char s_type, va_list arg)
{
	int	p_bytes;

	p_bytes = 0;
	if (s_type == '%')
		p_bytes = ft_putchar('%');
	else if (s_type == 'c')
		p_bytes = ft_putchar(va_arg(arg, int));
	else if (s_type == 's')
		p_bytes = ft_putstr(va_arg(arg, char *));
	else if (s_type == 'i' || s_type == 'd')
		p_bytes = ft_putnbr((long)va_arg(arg, int));
	else if (s_type == 'u')
		p_bytes = ft_putnbr_un(va_arg(arg, unsigned int));
	else if (s_type == 'x' || s_type == 'X')
		p_bytes = ft_putnbr_hex(va_arg(arg, unsigned int), s_type);
	else if (s_type == 'p')
		p_bytes = ft_putpointer(va_arg(arg, void *));
	return (p_bytes);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start (arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && check_type(str[i + 1]))
		{
			count += print_printf(str[i + 1], arg);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count ++;
		}
		i++;
	}
	va_end (arg);
	return (count);
}
