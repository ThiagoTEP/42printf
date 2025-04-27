/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:03:39 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/27 11:03:42 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(unsigned long long num, char format)
{
    int count = 0;
    char *hex;

    if (format == 'x') {
        hex = "0123456789abcdef";
    } else {
        hex = "0123456789ABCDEF";
    }  

    if (num >= 16)
        count += ft_putnbr_hex(num / 16, format);
    count += ft_putchar(hex[num % 16]);

    return count;
}
