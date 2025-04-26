
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

