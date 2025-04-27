/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:03:49 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/27 11:03:51 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long num)
{
    int count;

    count = 0;
    if(num < 0)
    {
        num *= -1;
        count += ft_putchar('-');
    }
    if (num < 10)
        count += ft_putchar(num + '0');
    else
    {
        count += ft_putnbr(num / 10);
        count += ft_putnbr(num % 10);
    }
    return (count);
}