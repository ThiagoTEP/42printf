
#include "ft_printf.h"

int ft_putstr(char *str)
{
    int count;

    count = 0;
    if (!str)
        return (ft_putstr("(NULL)"));
    while(str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
    return (count);
}