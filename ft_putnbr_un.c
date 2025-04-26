
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