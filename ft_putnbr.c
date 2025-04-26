
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