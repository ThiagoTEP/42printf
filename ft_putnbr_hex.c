
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
