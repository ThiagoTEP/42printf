/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:03:54 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/27 11:03:56 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putpointer(void *ptr)
{
    int count;

    count = 0;
    if (!ptr)
        return (ft_putstr("(nil)"));
    count += ft_putchar('0');
    count += ft_putchar('x');
    count += ft_putnbr_hex((unsigned long)ptr, 'x');
    return (count);
}

