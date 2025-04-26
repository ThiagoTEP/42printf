
#include "ft_printf.h"

int ft_putnbr_hex(unsigned int num, char S_type)
{
    int count;

    count = 0;
    if(num >= 16)
    {
        count += ft_putnbr_hex(num / 16, S_type);
        count += ft_putnbr_hex(num % 16, S_type);
    }
    else
    {
        if (num < 10)
            count += ft_putchar(num + '0');
        else
        {
            if (S_type == 'x')
                count += ft_putchar(num - 10 + 'a');
            else
                count += ft_putchar(num - 10 + 'A');
        }
    }
    return (count);
}