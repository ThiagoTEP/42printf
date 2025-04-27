/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:03:45 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/27 11:03:47 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_un(unsigned int num)
{
    int count;

    count = 0;
    if (num < 10)
        count += ft_putchar(num + '0');
    else
    {
        count += ft_putnbr_un(num / 10);
        count += ft_putnbr_un(num % 10);
    }
    return (count);
}